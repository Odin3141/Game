#include <stdio.h>
#include <string.h>

int i, j, k,m, n, x, y, flag, stop, flags, playVal1, playVal2;
float result, results;
    char arr[3][3][3]={
        {"A1","B1","C1"},
        {"A2","B2","C2"},
        {"A3","B3","C3"}
        };
char player1name[30], player2name[30], valin[3];
    char pos[3];
    char val[1][2][3]={
        {"X ","O "}
        };


    void game() {

        printf("Player1, What's your name?: \n");
scanf("%s", player1name);
printf("Player2, What's your name?:\n");
scanf("%s", player2name);
printf("%s | %s | %s\n", arr[0][0], arr[0][1], arr[0][2]);
printf("%s | %s | %s\n", arr[1][0], arr[1][1], arr[1][2]);
printf("%s | %s | %s\n", arr[2][0], arr[2][1], arr[2][2]);

for(i = 1;i < 30;++i) {

if(i%2 == 0) {
        strcpy(pos, "");
    printf("%s's turn \n", player2name);
    printf("Coordinate: \n");
    scanf("%s", pos);
    for(m=0;m<3;++m) {
        for(n=0;n<3;++n) {
    results = strcmp(pos, arr[n][m]);
    if(results == 0) {
        strcpy(arr[n][m], val[0][playVal2]);
    }
        }
    if(flags == 1) {
        break;
    }
    }
printf("%s | %s | %s\n", arr[0][0], arr[0][1], arr[0][2]);
printf("%s | %s | %s\n", arr[1][0], arr[1][1], arr[1][2]);
printf("%s | %s | %s\n", arr[2][0], arr[2][1], arr[2][2]);
}

    if(i%2 != 0){
        strcpy(pos, "");
    printf("%s's turn \n", player1name);
    printf("Coordinate: \n");
    scanf("%s", pos);
    printf("O/X: \n");scanf("%s", valin);
    if(strcmp(valin, "X")==0) {
        playVal1 = 0;
        playVal2 = 1;
    } else {
        playVal1 = 1;
        playVal2 = 0;
    }
    for(j=0;j<3;++j) {
        for(k=0;k<3;++k) {
    result = strcmp(pos, arr[k][j]);
    if(result == 0) {
        strcpy(arr[k][j], val[0][playVal1]);
    }
        }
    if(flag == 1) {
        break;
    }
    }
}
for(x = 0;x<3;++x) {
y = 0;
if(strcmp(arr[x][y], arr[x][y+1])==0 && strcmp(arr[x][y], arr[x][y+2])==0 && strcmp(arr[x][y+1], arr[x][y+2])==0) {
    stop = 1;
}
if(strcmp(arr[y][x], arr[y+1][x])==0 && strcmp(arr[y][x], arr[y+2][x])==0 && strcmp(arr[y+1][x], arr[y+2][x])==0) {
    stop = 1;
}
if(strcmp(arr[y][y], arr[y+1][y+1])==0 && strcmp(arr[y][y], arr[y+2][y+2])==0 && strcmp(arr[y+1][y+1], arr[y+2][y+2])==0) {
    stop = 1;
}
if(strcmp(arr[y][y+2], arr[y+1][y+1])==0 && strcmp(arr[y][y+2], arr[y+2][y])==0 && strcmp(arr[y+1][y+1], arr[y+2][y])==0) {
    stop = 1;
}
}
if(stop == 1) {
    printf("%s | %s | %s\n", arr[0][0], arr[0][1], arr[0][2]);
printf("%s | %s | %s\n", arr[1][0], arr[1][1], arr[1][2]);
printf("%s | %s | %s\n", arr[2][0], arr[2][1], arr[2][2]);
    if(i%2 == 0) {
        printf("%s Won!", player2name);
    } else {
        printf("%s Won!", player1name);
    }
    break;
}
}
    }
int main() {
    game();

















    return 0;
}