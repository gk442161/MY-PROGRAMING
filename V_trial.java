import java.util.*;

class V_trial{                                      //INITIALIZATION OF VECTOR
public static void main(String[] args)
{int value,i,count=0;
 Vector v1=new Vector();
 Integer a[]= new Integer[10];
 Integer n;
 Scanner sc=new Scanner(System.in);
 System.out.println("ENTER THE ELEMENTS");
 for(i=0;i<10;i++)                                //TAKING VALUES INTO VECTOR
 {
	 value=sc.nextInt();
	 v1.addElement(new Integer(value));
 }
 
System.out.println("\nELEMENTS COPIED IN ARRAY"); 
v1.copyInto(a);                        //COPY OF VECTOR INTO ARRAY
 for(i=0;i<10;i++)
 {
	 System.out.println(a[i]);
 }

System.out.println("\nENETR THE NUMBER FROM THE LIST TO FIND FREQUENCY OF IT");
 n=sc.nextInt(); 
Enumeration en=v1.elements();                       // FINDING FREQUENCY
    while(en.hasMoreElements())
	{if(n.equals(en.nextElement()))
		count++;
	}
       System.out.println("\tFREQUENCY OF "+n+" IS "+count);

}
}
 
