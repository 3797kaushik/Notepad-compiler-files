import java.lang.*;
import java.util.*;
import java.math.*;
import java.io.*;

public class first{
	
	static int longestPallindrome(String s){
		int len=s.length();
		boolean ar[][]=new boolean[len][len];
		int maxLen=1;
		for(int i=0;i<len;i++){
			ar[i][i]=true;
		}
		
		//printArray(ar);
		return len;
	}
	////////////////////////////////////
	static void printArray(boolean ar[][]){
		for(int i=0;i<ar.length;i++){
			for(int j=0;j<ar.length;j++){
				System.out.print(ar[i][j]+" ");
			}
			System.out.println();
		}
		System.out.println();
	}
	//////////////////////////////////////////////////////////////////
	public static void main (String[] args) throws java.lang.Exception
	{
	  Scanner sc=new Scanner(System.in) ;
		{
	 File f1=new File("input-java.txt");
	   PrintStream o = new PrintStream(new File("output-java.txt"));
	   PrintStream console = System.out;
        System.setOut(o);		
	 try{
	  sc = new Scanner(f1);
	  }catch(Exception e){}	  
		}
	 	String s=sc.next();
		System.out.println(longestPallindrome(s));
	}
}