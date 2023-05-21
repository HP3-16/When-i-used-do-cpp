import java.lang.*;
import java.util.*;
public class longestCommonPrefix {
    public static String longestCommonPrefix(String[] strs) {
        if(strs.length == 0)
            return "";
        
        String str = strs[0];
        for(int i=0;i<str.length();i++){
            char ch = str.charAt(i);
            for(int j=1;j<strs.length;j++){
                if(strs[j].charAt(i)!=ch)
                    return str.substring(0, i);
            }
        }

        return "xyz";
    }
    public static void main(String[] args) {
        String[] strs = {"Hey","Hello","Herrera"};
        System.out.println(longestCommonPrefix(strs));
    }
    
}
