#include<bits/stdc++.h>
int main()
{
  int a,b,c;
  scanf("%d %d%d",&a,&b,&c);
  if(a>b&&a>c){
    printf("%d is large number",a);
  }
  else if(b>a&&b>c){
    printf("%d is large number",b);
  }
  else{
    printf("%d is large number",c);
  }

    return 0;

}

