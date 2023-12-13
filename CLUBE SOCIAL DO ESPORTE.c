#include <stdio.h>

int main(){

	int cpf, idade, senha, csenha, ccpf, rcad, dsenha, matricular, opcao, escolha, escolha_esporte;
    char nome[50], email[50];

    do{
    	printf("\n");
        printf("Seja bem-vindo ao Clube Social Esporte\n");
        printf(" Escolha uma opcao:\n");
        printf(" Informacoes de esportes (digite 1)\n");
        printf(" Cadastre-se             (digite 2)\n");
        printf(" Ja sou cadastrado       (digite 3)\n");

        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                printf("Escolha o esporte para mais informacoes:\n");
                printf(" Digite 1 para Natacao\n");
                printf(" Digite 2 para Futsal\n");
                printf(" Digite 3 para Basquete\n");
                printf(" Digite 4 para Tenis\n");

                scanf("%d", &escolha);

                switch (escolha) {
                    case 1:
                        printf("Informacoes sobre Natacao:\n");
                        printf("Valor: R$120,00\n\n");
                        printf("Turno da Manha - Dias 3 e 5:\n");
                        printf("7-8h: 3 a 7 anos\n");
                        printf("8-9h: 3 a 7 anos\n");
                        printf("9-10h: 8 a 15 anos\n");
                        printf("10-11h: 16+ anos\n\n");
                        printf("Turno da Tarde - Dias 3 e 5:\n");
                        printf("15-16h: 3 a 7 anos\n");
                        printf("16-17h: 8 a 15 anos\n");
                        printf("17-18h: 16+ anos\n");
                        break;
                    case 2:
                        printf("Informacoes sobre Futsal:\n");
                        printf("Valor: R$150,00\n");
                        printf("Turno da Tarde - Dias 3 e 5: \n");
                        printf("15-16h: 5 a 9 anos\n");
                        printf("16-17h: 10 a 15 anos\n");
                        printf("17-18h: 16+ anos\n");
                        printf("Turno da Tarde - Dias 3 e 5: \n");
                        printf("15-16h: 5 a 9 anos\n");
                        printf("16-17h: 10 a 15 anos\n");
                        printf("17-18h: 16+ anos\n");
                        break;
                    case 3:
                        printf("Informacoes sobre Basquete:\n");
                        printf("Valor: R$210,00\n");
                        printf("Turno da Noite - Dias 2 e 4:\n");
                        printf("18-19h: 10 a 15 anos\n");
                        printf("19-20h: 16+ anos\n");
                        break;
                    case 4:
                        printf("Informacoes sobre Tenis:\n");
                        printf("Valor: R$350,00\n");
                        printf("Dias 2, 4 e 6\n");
                        printf("15-16h: 7 a 10 anos\n");
                        printf("16-17h: 10 a 15 anos\n");
                        printf("17-18h: 16+ anos\n");
                        break;
                    default:
                        printf("Esporte invalido\n");
                }
                break;
            case 2:
            	printf("Por favor, preencha as informacoes abaixo.\n");
                printf("Nome completo (obs: coloque _ para substituir o espaco): ");
                scanf("%s", nome);
                
                printf("Digite o seu CPF (somente numeros): ");
                scanf("%d", &cpf);
                
                printf("Digite a sua idade: ");
                scanf("%d", &idade);
                
                printf("Informe o seu email: ");
                scanf("%s", email);
                
                do {
                    printf("Crie uma nova senha (somente com numeros): ");
                    scanf("%d", &senha);
                    
                    printf("Confirme sua senha: ");
                    scanf("%d", &csenha);
                    
                    if (senha != csenha) {
                        printf("As senhas sao diferentes, digite novamente\n\n");
                    }
                } while (senha != csenha);
                
                printf("Cadastro realizado com sucesso\n");
                
                printf("Deseja se matricular em um esporte? (1 - Sim, 0 - Nao): ");
                
                 scanf("%d", &matricular);

                if (matricular == 1) {
                    printf("Escolha o esporte para se matricular:\n");
                    printf(" 1 - Natacao\n");
                    printf(" 2 - Futsal\n");
                    printf(" 3 - Basquete\n");
                    printf(" 4 - Tenis\n");
                    scanf("%d", &escolha_esporte);
                    
                    switch (escolha_esporte) {
					    case 1: 
					        if (idade <= 7) {
					            printf("Turma disponivel para Natacao dias 3 e 5 (7-8h) e (8-9h).\n");
					        } else if (idade <= 15) {
					            printf("Turma disponivel para Natacao dias 3 e 5  (9-10h).\n");
					        } else {
					            printf("Turma disponivel para Natacao dias 3 e 5  (10-11h).\n");
					        }
					        break;
					    case 2: 
					        if (idade <= 9) {
					            printf("Turma disponivel para Futsal dias 3 e 5 (15-16h).\n");
					        } else if (idade <= 15) {
					            printf("Turma disponivel para Futsal dias 3 e 5 (16-17h).\n");
					        } else {
					            printf("Turma disponivel para Futsal dias 3 e 5 (17-18h).\n");
					        }
					        break;
					    case 3: 
					        if (idade <= 15) {
					            printf("Turma disponivel para Basquete dias 2 e 4 (18-19h).\n");
					        } else {
					            printf("Turma disponivel para Basquete dias 2 e 4 (19-20h).\n");
					        }
					        break;
					    case 4: 
					        if (idade <= 10) {
					            printf("Turma disponivel para Tenis  dias 2, 4 e 6 (15-16h).\n");
					        } else if (idade <= 15) {
					            printf("Turma disponivel para Tenis dias 2, 4 e 6 (16-17h).\n");
					        } else {
					            printf("Turma disponivel para Tenis dias 2, 4 e 6 (17-18h).\n");
					        }
					        break;
					    default:
					        printf("Esporte inválido\n");
					        break;
					}
						 printf("Deseja se matricular neste dia e horario? (1 - Sim, 0 - Nao): ");
                    	int confirmar_matricula;
                    	scanf("%d", &confirmar_matricula);

                    	if (confirmar_matricula == 1) {
                        printf("O codigo de barras da mensalidade foi enviado para o seu email: %s\n", email);
                        printf("Apos o pagamento, sua matricula sera efetivada.\n");
                   		 } else {
                        printf("Matricula cancelada.\n");
                    	}
	
                break;
            }
            case 3:
            	 do {
                    printf("Digite o seu CPF (somente numeros): \n");
                    scanf("%d", &ccpf);
                    if (ccpf != cpf) {
                        printf("CPF incorreto \n \n");
                        printf("Digite (1) para se cadastrar \n");
                        printf("Ou qualquer numero para tentar novamente \n");
                        scanf("%d", &rcad);
                        switch (rcad) {
                            case 1:
                                printf("Por favor, preencha as informacoes abaixo. \n");
                                printf("Nome completo (obs: coloque _ para substituir o espaco): ");
                                scanf("%s", &nome);
                                
                                printf("Digite o seu CPF (somente numeros): ");
                                scanf("%d", &cpf);
                                
                                printf("Digite a sua idade: ");
                                scanf("%d", &idade);
                                
                                printf("Informe o seu email: ");
                                scanf("%s", &email);
                                
                                do {
                                    printf("Crie uma nova senha (somente com numeros): ");
                                    scanf("%d", &senha);
                                    
                                    printf("Confirme sua senha: ");
                                    scanf("%d", &csenha);
                                    
                                    if (senha != csenha) {
                                        printf("As senhas sao diferentes, digite novamente \n \n");
                                    }
                                } while (senha != csenha);
                                
                                printf("Cadastro realizado com sucesso \n");
                                
                                break;
                        }
                    }
                } while (ccpf != cpf);

                do {
                    printf("Digite a sua senha: \n");
                    scanf("%d", &dsenha);
                    if (dsenha != csenha) {
                        printf("Senha incorreta digite novamente \n \n");
                    }
                } while (dsenha != csenha);
                
                printf("Deseja se matricular em um esporte? (1 - Sim, 0 - Nao): ");
                
                 scanf("%d", &matricular);

                if (matricular == 1) {
                    printf("Escolha o esporte para se matricular:\n");
                    printf(" 1 - Natacao\n");
                    printf(" 2 - Futsal\n");
                    printf(" 3 - Basquete\n");
                    printf(" 4 - Tenis\n");
                    scanf("%d", &escolha_esporte);
                    
                    switch (escolha_esporte) {
					    case 1: 
					        if (idade <= 7) {
					            printf("Turma disponivel para Natacao dias 3 e 5  (7-8h) e (8-9h).\n");
					        } else if (idade <= 15) {
					            printf("Turma disponivel para Natacao dias 3 e 5  (9-10h).\n");
					        } else {
					            printf("Turma disponivel para Natacao dias 3 e 5  (10-11h).\n");
					        }
					        break;
					    case 2: 
					        if (idade <= 9) {
					            printf("Turma disponivel para Futsal dias 3 e 5 (15-16h).\n");
					        } else if (idade <= 15) {
					            printf("Turma disponivel para Futsal dias 3 e 5 (16-17h).\n");
					        } else {
					            printf("Turma disponivel para Futsal dias 3 e 5 (17-18h).\n");
					        }
					        break;
					    case 3: 
					        if (idade <= 15) {
					            printf("Turma disponivel para Basquete dias 2 e 4 (18-19h).\n");
					        } else {
					            printf("Turma disponivel para Basquete dias 2 e 4 (19-20h).\n");
					        }
					        break;
					    case 4: 
					        if (idade <= 10) {
					            printf("Turma disponivel para Tenis  dias 2, 4 e 6(15-16h).\n");
					        } else if (idade <= 15) {
					            printf("Turma disponivel para Tenis  dias 2, 4 e 6 (16-17h).\n");
					        } else {
					            printf("Turma disponivel para Tenis  dias 2, 4 e 6 (17-18h).\n");
					        }
					        break;
					    default:
					        printf("Esporte inválido\n");
					        break;
					}
						 printf("Deseja se matricular neste dia e horario? (1 - Sim, 0 - Nao): ");
                    	int confirmar_matricula;
                    	scanf("%d", &confirmar_matricula);

                    	if (confirmar_matricula == 1) {
                        printf("O codigo de barras da mensalidade foi enviado para o seu email: %s\n", email);
                        printf("Apos o pagamento, sua matricula sera efetivada.\n");
                   		 } else {
                        printf("Matricula cancelada.\n");
                    	}
	
                break;
            }
           	 default:
                printf("Opcao invalida\n");

        printf("\nO que deseja fazer:\n");
        printf("1 - Voltar ao menu inicial\n");
        printf("0 - Encerrar acesso\n");
        scanf("%d", &opcao);

        printf("\n");
    }
	}while (opcao == 1);

    return 0;
}
