#include<stdio.h>
int main (){
   int table_of,table_upto, result;
  printf("Enter table of : ");
  scanf("%d", &table_of);
  printf("Enter table upto : ");
  scanf("%d", &table_upto);
  for(int i=1;i<=table_upto;i++){
      result=table_of*i;
      printf("%d x %d = %d\n",table_of,i,result);
  }


    return 0 ;
}
