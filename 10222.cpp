#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    int a,i,n;
    scanf("%[^\n]s", str);
    n=strlen(str);
    for (i=0;i<n;i++){
    switch (str[i]) {
    case '}' :printf("p"); break;
    case '[' :printf("o"); break;
    case 'p' : case 'P' :printf("i"); break;
    case 'O' : case 'o' :printf("u"); break;
    case 'i' : case 'I' :printf("y"); break;
    case 'U' : case 'u' :printf("t"); break;
    case 'y' : case 'Y' :printf("r"); break;
    case 'T' : case 't' :printf("e"); break;
    case 'r' : case 'R' :printf("w"); break;
    case 'E' : case 'e' :printf("q"); break;
    case 'w' : case 'W' :printf("w"); break;
    case '"' : case '\'' :printf("l"); break;
    case ';' : case ':' :printf("k"); break;
    case 'L' : case 'l' :printf("j"); break;
    case 'k' : case 'K' :printf("h"); break;
    case 'j' : case 'J' :printf("g"); break;
    case 'h' : case 'H' :printf("f"); break;
    case 'G' : case 'g' :printf("d"); break;
    case 'F' : case 'f' :printf("s"); break;
    case 'D' : case 'd' :printf("a"); break;
    case 's' : case 'S' :printf("s"); break;
    case 'A' : case 'a' :printf("a"); break;
    case 'q' : case 'Q' :printf("q"); break;
    case '/' : case '?' :printf(","); break;
    case '>' : case '.' :printf("m"); break;
    case '<' : case ',' :printf("n"); break;
    case 'M' : case 'm' :printf("b"); break;
    case 'N' : case 'n' :printf("v"); break;
    case 'B' : case 'b' :printf("c"); break;
    case 'v' : case 'V' :printf("x"); break;
    case 'C' : case 'c' :printf("z"); break;
    case 'x' : case 'X' :printf("x"); break;
    case 'Z' : case 'z' :printf("z"); break;
    case '\\' : case '|' :printf("-"); break;
    case '+' : case '=' :printf("0"); break;
    case '_' : case '-' :printf("9"); break;
    case '0' : case ')' :printf("8"); break;
    case '9' : case '(' :printf("7"); break;
    case '*' : case '8' :printf("6"); break;
    case '&' : case '7' :printf("5"); break;
    case '6' : case '^' :printf("4"); break;
    case '5' : case '%' :printf("3"); break;
    case '4' : case '$' :printf("2"); break;
    case '3' : case '#' :printf("1"); break;
    case '2' : case '@' :printf("`"); break;
    case '!' : case '1' :printf("1"); break;
    case '`' : case '~' :printf("`"); break;
    
    default : printf("%c", str[i]); break;
}}}
