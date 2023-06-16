DAILY CHALLENGE
Prime or Not - Matrix
ProgramID- 8008
The program must accept an integer matrix of size RxC as the input. For
each integer in the matrix, the program must replace all the prime
numbers by 1 and all the non-prime numbers by 0. Then the program
must print the modified matrix as the output.
Boundary Condition(s):
1 <= R, C <= 100
2 <= Each Integer Value <= 10000

Input Format:
The first line contains two integers R and C separated by a space.
The next R lines contain C integers each separated by space(s).
Output Format:
The first line R lines contain C integers each separated by a space.
Example Input/Output 1:
Input:
23
259
683
Output:
110
001
Explanation:
In the 1st row and the 1st column of the matrix, 2 is a prime number. So 1
is printed.
#include<stdio.h>
#include<stdlib.h>
int isprime(int a){
 for(int i=2;i<a;i++){

if(a%i==0){

return 0;
}
}
return 1;
}
 int main()
 {


int m,n;
scanf("%d %d\n",&m,&n);
int arr[m][n];
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
scanf("%d",&arr[i][j]);
if(isprime (arr[i][j])){
arr[i][j]=1;
 }
else{
arr[i][j]=0;
}

}

}
}
for(int i=0;i<m;i++){

for(int j=0;j<n;j++){
printf("%d",arr[i][j]);
}printf("\n");