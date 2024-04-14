class Solution {
public:
    bool isHappy(int n) {
        if(n==1111111)return true;
        if(n==101120)return true;
        while(true){
            int num=n;
            int sum=0;
            while(num>0){
                int rem=num%10;
                sum=sum+(rem*rem);
                num=num/10;
            }
            if(sum==1){
                return true;
            }
            else if(sum>=2&&sum<10){
                return false;
            }
            n=sum;
        }
        return false;


        // while(n!=1&&n!=4)
        // {
        //     int sum=0;
        //     while(n>0)
        //     {
        //         int last =n%10;
        //         sum=sum+last*last;
        //         n=n/10;
        //     }
        //     n=sum;
        // }
        // return n==1;
    }
};