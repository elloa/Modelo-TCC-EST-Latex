-module(calculadora).
-export([result/1]).

result({soma,A,B}) ->
    {'Resultado da soma = ',A + B};
result({subtracao,A,B}) ->
    {'Resultado da subtracao = ',A - B};
result({multiplicacao,A,B}) ->
    {'Resultado da multiplicacao = ',A * B};
result({divisao,A,B}) ->
    {'Resultado da divisao = ',A / B};
    result({_,A,B}) ->
        {'Operacao invalida!!'}.