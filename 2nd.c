#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct rela                            //structure for father and a child
{
    char child[10],father[10];
}s[10];                                
int count(char b[],int n,int cnt)      //count the no of grandchildren
{
    int i;
    for(i=0;i<n;i++)
    {
        if(strcmp(b,s[i].father)==0)   //compare the child name with all father's name to find the Grandchildean
        {
            cnt++;                     //interments when any grandchild found
        }
    }
    return cnt;
}
void main()
{
    int n,i,cnt=0;
    char a[20];
    
    printf("enter the no of inputs:");
    scanf("%d",&n);
    printf("enter the inputs:");
    for(i=0;i<n;i++)                    //both father and child name are stored in structure
    {
        printf("father name:");
        scanf("%s",&s[i].father);       
        printf("child name:");
        scanf("%s",&s[i].child);      
 
    }
    printf("enter the grandfather's name:");
    scanf("%s",&a);
    for(i=0;i<n;i++) 
      { 
        if(strcmp(a,s[i].father)==0) //compare the grandfather name with all father's name 
        { 
                cnt=count(s[i].child,n,cnt); //pass child name to function to count grandchild 
        } 
      } 
      if(cnt>0)
    {
        printf("No of grandchildren for %s is %d",a,cnt);
    }
    else
    {
        printf("No of grandchildren for %s is %d",a,cnt);
    }
  
}

