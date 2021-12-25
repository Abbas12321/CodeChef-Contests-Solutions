/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		try{
		    Scanner sc = new Scanner(System.in);
		    int t = sc.nextInt();
		    while(t!=0){
		        t--;
		        int n = sc.nextInt();
		        int[] arr1 = new int[n];
		        int[] arr2 = new int[n];
		        
		        for(int i=0;i<n;i++){
		            arr1[i] = sc.nextInt();
		            //System.out.println(arr1[i]);
		        }
		        
		        for(int i=0;i<n;i++){
		            arr2[i] = sc.nextInt();
		            //System.out.println(arr1[i]);
		        }
		        
		        int count = 0;
		        int temp = 0;
		        for(int i=0;i<n;i++){
		            if(arr1[i]-temp>=arr2[i]){
		                count++;
		            }
		            //System.out.println(temp);
		            temp = arr1[i];
		        }
		        System.out.println(count);
		    }
		}catch(Exception e){
		    return;
		}
	}
}
