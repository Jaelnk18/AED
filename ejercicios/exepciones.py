#1
'''while(True): #el while para q siga pidiendo un numero en caso de un error
    try:
        n= float(input("Ingrese un valor: "))
        m= 4
        print(f"{m}/{n}={m/n}")
        break #importante romper ( romper debajo del else para q se ejecute el else) 
    except: #lo q sucede si ocurre un error, se puede poner varios except con el tipo de error(except type error:)
        print("Ingrese bien el numero")
    else: #sino ocurre un error
        print("todo funciono bien :)")
    finally: #finaliza el try y se ejecuta ocurra o no ocurra un error
        print("fin de la iteracion")'''
#2 muestre el tipo de error (type error,value error, etc)
'''while(True):
    try:
        n= float(input("Ingrese un valor: "))
        m= 4
        print(f"{m}/{n}={m/n}")
        break 
    except Exception as e: #una excepcion en la variable e(exepcion como e)
        print( type(e).__name__)'''
# segun el tipo de error
'''while(True):

    try:
        n= float(input("Ingrese un valor: "))
        m= 4
        print(f"{m}/{n}={m/n}")
        break
    except ValueError:
        print("no se puede convertir un str a float")
    except ZeroDivisionError:
        print("no se puede divisir por 0")
    except Exception as e: 
        print( type(e).__name__)'''

#INV0CACION DE EXCEPCIONES       
'''def mi_funcion(algo=None): 
    if algo==None:
        print("ERROR no se permite un valor nulo")
mi_funcion()'''

'''def mi_funcion(algo=None): 
    if algo==None:
        raise ValueError("ERROR no se permite un valor nulo") #invocar un value error con un mensaje de xq el error
mi_funcion()'''


