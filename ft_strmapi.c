#include "libft.h"

char	*ft_strmapi(const char *s, char)


char *ft_strmapi(const char *s, char (*f)(unsigned int, char)) {
    if (s == NULL || f == NULL)
        return NULL;
    
    unsigned int len = 0;
    while (s[len] != '\0')  // 文字列の長さを計算
        len++;
    
    char *result = (char *)malloc((len + 1) * sizeof(char));  // 結果を格納するためのメモリを確保
    if (result == NULL)
        return NULL;
    
    unsigned int i;
    for (i = 0; i < len; i++) {
        result[i] = f(i, s[i]);  // 指定された関数を文字列の各文字に適用し、結果を新しい文字列に格納
    }
    result[i] = '\0';  // 新しい文字列の終端を設定
    
    return result;
}
この関数は、指定された関数 f を文字列 s の各文字に適用し、その結果を新しい文字列として返します。f 関数は、引数として現在のインデックスと対応する文字を受け取り、新しい文字を返す必要があります。

ft_strmapi関数は、文字列の変換や加工を行う際に便利です。例えば、文字列の各文字を大文字に変換する、文字列の各文字に特定の操作を適用するなどの目的で使用することができます。






