import java.util.Scanner;

public class ArregloEstudiantes {
  public static void main(String[] args) {
    String curso[] = new String[3];

    Scanner sc = new Scanner(System.in);

    for (int i = 1; i <= 3; i++) {
      System.out.println("Ingrese el nombre del alumno número " + i);
      
      curso[i - 1] = sc.nextLine();
    }

    sc.close();

    for (int i = 0; i < 3; i++) {
      System.out.println(curso[i]);
    }
  }
}
