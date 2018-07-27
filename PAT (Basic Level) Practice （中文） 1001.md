# PAT (Basic Level) Practice （中文） 1001

我。。。我想多了

开始还加了对输入是否在区间的判断，，结果4个测试点超时只有一个正确。。。。根本不需要这个判断的

![1532666150735](C:\Users\lenovo\AppData\Local\Temp\1532666150735.png)

```c
#include<stdio.h>
int main(){
  int n;
  while(scanf("%d",&n)!=EOF){
    int count=0;
    while(n!=1){
    if(n%2==0){
      n=n/2;
    }
    else{
      n=(3*n+1)/2;
      
    }
     count++;
    }
    printf("%d",count);
  }
  return 0;
}
  
```

