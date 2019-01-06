#include<stdio.h>
int main(){
  int N;
  char gesture1,gesture2;//分别记录甲乙手势
  int C1=0,C2=0,J1=0,J2=0,B1=0,B2=0;//分别代表甲乙出相应手势的获胜次数
  int draw=0;//平手次数
  scanf("%d",&N);
  
  for(int i=0;i<N;i++){
    scanf(" %c %c",&gesture1,&gesture2);
    
   
    if(gesture1==gesture2)  draw++;
    if(gesture1=='C'&& gesture2=='J') C1++;
    if(gesture1=='C'&& gesture2=='B') B2++;
    if(gesture1=='J'&& gesture2=='B') J1++;
    if(gesture1=='J'&& gesture2=='C') C2++;
    if(gesture1=='B'&& gesture2=='C') B1++;
    if(gesture1=='B'&& gesture2=='J') J2++;
	
    
  
  }
  printf("%d %d %d\n",C1+J1+B1,draw,C2+J2+B2);
  printf("%d %d %d\n",C2+J2+B2,draw,C1+J1+B1);
  printf("%c %c",(J1>C1?J1:C1)>B1?(J1>C1?'J':'C'):'B',(J2>C2?J2:C2)>B2?(J2>C2?'J':'C'):'B');
  return 0;
}
