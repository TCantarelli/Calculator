import math

def soma():
     try:
        N1 = float(input("informe o primeiro numero: "))
        N2 = float(input("informe o segundo numero: "))
        S = N1 + N2
        print(f"o resultado dessa operacao  é {S}")
     except ValueError:   
          print("Operação invalido")
    
def subtracao():
     try:
         N1 = float(input("informe o primeiro numero: "))
         N2 = float(input("informe o outro numero: "))
         S = N1 - N2
         print(f"o resultado é: {S}")
     except ValueError:
          print("Operação invalida")

    
def multiplication():
     try:
         N1 = float(input("escolha um numero: "))
         N2 = float(input("escolha o outro numero: "))
         S = N1 * N2
         print(f"o resultado da multiplicação é: {S}")
     except ValueError:
          print("Operação invalida")
def equacao_segundo_grau():
     try:
         A = float(input("determine o valor de A: "))
         B = float(input("determine o valor de B: "))
         C = float(input("determine o valor de C: "))
         if A != 0:
          Delta = (B**2) - (4 * A * C)
          XV = -B / (2 * A)
          YV = (-(Delta))/ (4 * A)
         if Delta > 0:
                 X1 = (-B + math.sqrt(Delta)) / (2 * A)
                 X2 = (-B - math.sqrt(Delta)) / (2 * A)
                 print(f" o X1 é: {X1} e o X2 é: {X2}, e o XV é {XV}, e o YV é: {YV} ")
         if Delta < 0:
              print(f"delta negativo, sem resposta no conjunto dos reais, mas o XV é: {XV}, e YV é: {YV}")
         if Delta == 0:
              YV = 0
              X1 = (-B + math.sqrt(Delta)) / (2 * A)
              print(f"delta é zero, X1 e X2 tem o mesmo resultando sendo = {X1}, o YV é: {XV}, e o YV é: {YV}")
     except ValueError:
          print("operação invalida")
def pitagoras():
     try:
         print("escolha: 1-descobrir valor da hipotenusa  2-descobrir valor do outro cateto: ")
         N4 = int(input())
         if N4 == 1:
             C1 = float(input("digite o valor do primeiro cateto: "))
             C2 = float(input("digite o valor do outro cateto: "))
             S = ((C1**2) + (C2**2))
             C = math.sqrt(S)
             print(f"valor da hipotenusa é {C}")
         if N4 == 2:
              C1 = float(input("Digite o valor do Cateto: "))
              C = float(input("Digite o valor da hipotenusa: "))
              N6 = ((C**2) - (C1**2))
              C2 = math.sqrt(N6)
              print(f"O valor do outro cateto é: {C2}")
     except ValueError:
          print("Operação invalida")         
def potencia():
     try:
      N1 = float(input("digite um numero: "))
      N2 = float(input("digite o valor do exponecial: "))
      S= (N1**N2)
      print(f"o valor dessa potenciação é de: {S}")
     except ValueError:
          print("Operação invalida")
def raiz_quadrada():
     try:
      N1 = float(input("digite o valor desejado: "))
      if N1 < 0:
            print("sem resposta no conjunto dos reais")
      if N1 >=0:
          S = math.sqrt(N1)
          print(f"a raiz de {N1} é {S}")
     except ValueError:
          print("Operação invalida")
def divisao():
    try:
      N1 = float(input("escolha o primeiro numero: "))
      N2 = float(input("escolha o segundo numero: "))
      S = N1 / N2
      print(f"A divisão de {N1} por {N2} é {S}")
    except ValueError:
        print("Operação Invalida")

def main():
     while True:
          print("Escolha qual operação:")
          print("1 = soma")
          print("2 = subtração")
          print("3 = multiplicação")
          print("4 = Equação 2° Grau")
          print("5 = Pitagoras")
          print("6 = Potenciação")
          print("7 = raiz quadrada")
          print("8 = Divisão")

          try:
               N3 = int(input("Qual gostaria? "))   
               match N3:
                    case 1:
                     soma()
                    case 2:
                     subtracao()
                    case 3:
                     multiplication()
                    case 4:
                     equacao_segundo_grau()
                    case 5:
                     pitagoras()
                    case 6:
                     potencia()
                    case 7:
                     raiz_quadrada()
                    case 8:
                       divisao()
                    case _:
                      print("inválido")  
          except ValueError:
               print("invalido")

          continuar = input("deseja fazer outra operacãow s/n?: ")
          if continuar.lower() != 's':
           break
if __name__ == "__main__":
    main() 