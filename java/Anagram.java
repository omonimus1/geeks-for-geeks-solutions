// import Arrays to implement sort
import java.util.Arrays;
import java.io.*;

public class Anagram {  
    static boolean isAnagram(String str1, String str2) {  
        String s1 = str1.replaceAll("\\s", "");  
        String s2 = str2.replaceAll("\\s", "");  
        boolean status = true;  
        if (s1.length() != s2.length()) {  
            return false; 
        } 
        else {  
            char[] ArrayS1 = s1.toLowerCase().toCharArray();  
            char[] ArrayS2 = s2.toLowerCase().toCharArray();  
             Arrays.sort(ArrayS1);  
            Arrays.sort(ArrayS2);  
            return  Arrays.equals(ArrayS1, ArrayS2);  
        }  
    
    }  
   
    public static void main(String[] args) {  
        if(isAnagram("Keep", "Peek"))
            System.out.print("Case 1 " + "are anagrams");
        else
            System.out.println("Are not anagrams"); 
        //isAnagram("Mother In Law", "Hitler Woman");  
    }  
}  