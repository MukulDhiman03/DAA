#include<stdio.h>
void main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0 ; i<n ;i ++){
            scanf("%d",&arr[i]);
        }
        int key;
        int count=0;
        int flag =0;
        scanf("%d",&key);
        for(int i=0 ; i<n ; i++){
            if(arr[i]==key){
                count++;
                flag=1;
            }
        }
        if(flag){
            printf("%d - %d ",key , count);
        }
        else{
            printf("Key Not Present");
        }
       

    }
}