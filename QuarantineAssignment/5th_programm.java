package QuarantineAssignment;

import javax.swing.JOptionPane;
import java.io.*;
import java.nio.file.Files;

public class CopyImage {
    public static void main(String[] args) {
        try {
            File source=new File("src/QuarantineAssignment/test.png");
            File dest=new File("src/QuarantineAssignment/copy.png");
            Files.copy(source.toPath(),dest.toPath());
            JOptionPane.showMessageDialog(null,"Image copied successfully!!");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
