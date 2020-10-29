package QuarantineAssignment;

import java.io.File;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.StringTokenizer;

public class CountFile {
    public static void main(String[] args) {
        try{
            File dest = new File("src/QuarantineAssignment/copy.txt");
            String content=new String(Files.readAllBytes(dest.toPath()));
            StringTokenizer wordCount=new StringTokenizer(content," \n");
            StringTokenizer sentenceCount=new StringTokenizer(content,".?!");
            int count=wordCount.countTokens();
            int characters=0;
            while(wordCount.hasMoreTokens()){
                String word=wordCount.nextToken();
                characters+=word.length();
            }
            System.out.printf("Letter Count : %d%n",characters);
            System.out.printf("Word count : %d%n",count);
            System.out.printf("Sentence Count : %d%n",sentenceCount.countTokens());
        }
        catch (Exception e){

        }
    }
}
