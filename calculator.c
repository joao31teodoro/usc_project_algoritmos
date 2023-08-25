float calculadora(int n1, char operacao, int n2) {
    float resultado;
    
    switch (operacao) {
        case '+':
            resultado = n1 + n2;
            break;
        case '-':
            resultado = n1 - n2;
            break;
        case '*':
            resultado = n1 * n2;
            break;
        case '/':
            if (n2 != 0) {
                resultado = (float)n1 / n2; // Garante que a divisão resulta em um número de ponto flutuante.
            } else {
                resultado = -1.0; // Indicador de erro para divisão por zero.
            }
            break;
        default:
            resultado = 0; // Operação desconhecida, retorno padrão 0.
            break;
    }

    return resultado;
}
