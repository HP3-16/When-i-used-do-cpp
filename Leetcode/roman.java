public class roman {
    public static int romanToInt(String s) {
        int[] num = new int[s.length()];
        for(int i =0;i<s.length();i++){
            char ch  = s.charAt(i);

            if (ch == 'M')
                num[i] = 1000;
            else if(ch == 'D')
                num[i] =500;
            else if(ch == 'C')
                num[i] = 100;
            else if(ch=='L')
                num[i] = 50;
            else if(ch=='X')
                num[i] = 10;
            else if(ch=='V')
                num[i] = 5;
            else
                num[i] = 1;
        
            
        }
        int val=0;
            for(int i =0;i<num.length-1;i++){
                if(num[i]<num[i+1])
                num[i]*=-1;
                
                val+=num[i];
            }

            return val+num[num.length-1];

    }
    public static void main(String[] args) {
        System.out.println(romanToInt("IX"));
    }
    
}
