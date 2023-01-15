#include <bits/stdc++.h>

int arr[8];
char c;

int lower[13];
int higher[13];
int eq[13];
int comparisons = 0;

bool impossible = 0;

int main(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 8; j++){
            scanf("%d", &arr[j]);
            if(j == 3)
                scanf("%c", &c);
        }

        if(c == '>'){
            for(int j = 0; j < 4; j++){
                higher[arr[j]]++;
            }
            for(int j = 4; j < 8; j++){
                lower[arr[j]]++;
            }
            comparisons++;
        }

        if(c == '<'){
            for(int j = 0; j < 4; j++){
                lower[arr[j]]++;
            }
            for(int j = 4; j < 8; j++){
                higher[arr[j]]++;
            }
            comparisons++;
        }

        if(c == '='){
            for(int j = 0; j < 8; j++){
                eq[arr[j]]++;
            }

        }
    }

    for(int i = 1; i < 13; i++){
        if(lower[i] == comparisons)
        printf("%d %d %d\n", lower[i], higher[i], eq[i]);
    }


    return 0;
}
