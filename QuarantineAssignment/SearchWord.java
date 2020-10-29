package QuarantineAssignment;

import java.io.File;
import java.nio.file.Files;
import java.util.Scanner;
import java.util.StringTokenizer;

public class SearchWord {
    public static void main(String[] args) {
       try {
           int count=0;
           Scanner scanner=new Scanner(System.in);
           System.out.print("Please enter file name(with extension): ");
           String fileName=scanner.nextLine();
           System.out.flush();
           System.out.print("Enter word to search :");
           String word=scanner.next();
           File file =new File("src/QuarantineAssignment/".concat(fileName));
           String content=new String(Files.readAllBytes(file.toPath()));
           StringTokenizer words=new StringTokenizer(content," \n");
           while(words.hasMoreTokens()){
               String curWord=words.nextToken();
               if(curWord.equals(word))
                   count++;
           }
           System.out.println("Occurrence of the given word is : "+count);
       }
       catch (Exception e){

       }
    }
}
