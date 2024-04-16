#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int n = 0, qts = 0, qtdiv = 0, pn = 0, d = 0, achou = 0;
	for (qts; 0 <= 14; qts++) {
		printf("Digite o numero sorteado:");
		scanf("%d", &n);
		if ((n = 1) || (n = 2)) {
			printf("%d", n);
		} else {
			achou = 0;
			pn = n;
			while (achou == 0) {
				pn -=1;
				qtdiv = 0;
				for (d; 2 <= pn - 1; d++) {
					if (pn % d == 0) {
						qtdiv += 1;
					}
				}
				if (qtdiv == 0) {
					printf("%d", pn);
					achou = 1;
				}
			}
		}
	}
return 0;
}