import java.util.Scanner;

public class MatricesAlmacen {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String[][] productos = new String[2][25];
    int contador = 0;
    char seguir = 'n';

    do {
      System.out  .println("Ingrese el nombre del producto:");
      productos[0][contador] = sc.nextLine();

      System.out  .println("Ingrese la cantidad del producto:");
      productos[1][contador] = sc.nextLine();   
      
      System.out  .println("Ingrese s si desea continuar ingresando productos o, n para salir:");
      seguir = sc.next().charAt(0);  
      sc.nextLine(); // Consumir el retorno de carro pendiente

      contador++;
    } while (seguir == 's' || contador >= 25);

    for (int i = 0; i < contador; i++) {
      System.out  .println("Producto: " + productos[0][i] + " - Cantidad: " + productos[1][i]);
    }
    sc.close();
  }
}
