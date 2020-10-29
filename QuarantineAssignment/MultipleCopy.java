package QuarantineAssignment;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.nio.file.Files;
import java.nio.file.Paths;

public class MultipleCopy {
    public static void main(String[] args) {
        try {
            File dest = new File("src/QuarantineAssignment/copy.txt");
            File source;
            String content;
            FileWriter fr = new FileWriter(dest, true);
            BufferedWriter br = new BufferedWriter(fr);
            for (String name : args) {
                content = new String(Files.readAllBytes(Paths.get("src/QuarantineAssignment/" + name)));
                br.write(content+"\n");
            }
            br.close();
            fr.close();
        } catch (Exception e) {
            System.out.println(e);
        }


    }
}
