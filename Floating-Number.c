#include <stdio.h>

int main() {

    float x;
    
    scanf("%f", &x);
    
    printf("%.3f", x);
       
    return 0;
}

git init
git add .
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/sumon-webs/HackerRank-Problem-Solved.git
git push -u origin main