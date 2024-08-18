void moveZeroes(int* nums, int num){
    int r=0;
int* ans=(int*)malloc(num*sizeof(int));
    for(int i=0;i<num;i++){
        if(nums[i]!=0){
            ans[r]=nums[i];
            r++;
        }
    }
    for(r;r<num;r++){
        ans[r]=0;
    }
    for(int i=0;i<num;i++){
        nums[i]=ans[i];
    }
}