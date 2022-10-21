import java.util.Scaner;

public class CajeroAutomatico{
	
	public static void main(string[] args){
		
		
		system.out.println ("Cajero Automatico ATM");
		system.out.println("   Welcome - Bienvenido\n");
		scanner leer = new scanner(system.in); 
		system.out.println("Ingresa tu tarjeta-codigo-CLABE\n");
		system tarjeta = leer.next();
		system.out.println("Ingresa tu NIP para Acceder a la cuenta\n");
		string pin = leer.next();
		if (pin.equals("1234")){
			
			double saldo = 10,000;
			string opcion = "0";
			
			while (!opcion.equals("4")){
				system.out.println("\n\nCAJERO CODHEY");
				system.out.println("1. Consultar Saldo");
				system.out.println("2. Realizar un deposito");
				system.out.println("3. Retirar Efectivo");
				system.out.println("4. Salir");
				opcion = leer.next();
				switch (opcion){
					case "1":{
						system.out.println ("El saldo de la tarjeta es: " + Double.toString(saldo));
						break;
					}
					case "2": {
						system.out.println("Depositar Efectivo");
						system.out.println("Ingrese el monto a despositar");
						double deposito=leer.nextDouble();
						if (deposito>0) {
                            saldo= saldo + deposito;
                        }
                        else {
                            system.out.println("Error. Monto incorrecto");
                        }
                         break;    
					}
					case "3": {
                        system.out.println("Retirar Efectivo");
                        double montoRetirar;
                        montoRetirar = leer.nextDouble();
                        if (montoRetirar <= saldo){
                            saldo = saldo - montoRetirar;
                        }
                        else{
                            system.out.println("No se puede retirar un monto mayor al saldo");
                        }
                        break;
                    }
                    case "4": {
                        system.out.println("Gracias por utilizar el programa");
                        break;
                    }
                    default: {
                        system.out.println("Opcion incorrecta");
                        break;
                    }
				}
				
			}
			
			
		}
        else{
            system.out.println("Password incorrecto");
        }
	}
	
}
