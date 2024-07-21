class Solution {
public:
    int givesum(int num){
        int s = 0;
        while(num>0){
            int rem = num % 10; 
            s = s+rem;
            num = num/10;
        }
        return s;
    }

    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = givesum(x);
        if( (x % sum) == 0){
            return sum;
        }
        return -1;
    }
};