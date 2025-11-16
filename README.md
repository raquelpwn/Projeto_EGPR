#  Projeto EGPR - Sistema de Segurança Comercial 


<p align="center">
  Protótipo funcional de um sistema de alarme para portas e janelas, desenvolvido com Arduino UNO,
  sensores magnéticos (reed switch) e buzzer, totalmente simulado no SimulIDE.
</p>

<br>

<!-- Imagem do circuito -->
<p align="center">
  <img src="imagens/circuito-simulide.png" width="600" alt="Circuito no SimulIDE">
</p>

---

## 📌 Descrição do Projeto

<p>
Este projeto tem como objetivo desenvolver um sistema de segurança simples, acessível e de fácil implementação,
voltado para ambientes comerciais e residenciais. O sistema emite um alarme ao detectar a abertura indevida de portas
ou janelas, utilizando sensores magnéticos e um buzzer. Todo o desenvolvimento foi realizado através do SimulIDE e Arduino IDE.
</p>

---

## 🎯 Objetivos

- Desenvolver a arquitetura do sistema utilizando microcontroladores.
- Criar o firmware em Arduino IDE para controle de sensores e atuadores.
- Simular o funcionamento completo do circuito no SimulIDE.
- Validar o comportamento do sistema com membros da comunidade.

---

## 🛠️ Tecnologias Utilizadas

<p>
  <img src="https://img.shields.io/badge/Arduino-IDE-00979D?logo=arduino&logoColor=white">
  <img src="https://img.shields.io/badge/SimulIDE-Simulation-blue">
  <img src="https://img.shields.io/badge/C++-Arduino%20Language-00599C?logo=cplusplus&logoColor=white">
  <img src="https://img.shields.io/badge/Git-Version%20Control-F05032?logo=git&logoColor=white">
  <img src="https://img.shields.io/badge/Google%20Drive-Docs-34A853?logo=googledrive&logoColor=white">
  <img src="https://img.shields.io/badge/WhatsApp-Communication-25D366?logo=whatsapp&logoColor=white">
</p>


---

## ⚙️ Arquitetura do Sistema

<p>
O sistema é baseado no microcontrolador Arduino UNO, utilizando sensores magnéticos (reed switch) para monitorar portas/janelas,
um buzzer para alarme sonoro e um LED indicador. Um botão permite armar e desarmar o sistema.
</p>

### **Fluxo de Funcionamento**
1. O sistema inicia desativado.  
2. O botão ativa ou desativa o alarme.  
3. Se ativado e o sensor detectar abertura:  
   - O buzzer dispara.  
   - O LED de status muda.  

---

## 📅 Cronograma do Projeto

| Atividade | Responsável | Prazo | Entrega |
|----------|-------------|--------|---------|
| Criação da pasta e grupo | Renylle | 18/08 – 08/09 | Organização inicial |
| Levantamento de requisitos | Guilherme | 08/09 – 15/09 | Documento de requisitos |
| Modelagem da arquitetura | Pamella e Renylle | 15/09 – 05/10 | Diagramas |
| Definição dos sensores/atuadores | Pamella e Guilherme | 01/10 – 08/10 | Lista definida |
| Programação do firmware | Pamella | 05/10 – 15/10 | Código-fonte |
| Simulação no SimulIDE | Pamella | 10/10 – 20/10 | Arquivo .simu |
| Registro de testes | Guilherme e Renylle | 15/10 – 22/10 | Relatório |
| Validação com a comunidade | Guilherme e Renylle | 20/10 – 25/10 | Feedback |
| Ajustes finais | Renylle e Pamella | 25/10 – 05/11 | Protótipo final |
| Relatório e apresentação | Equipe EGPR | 05/11 – 10/11 | Documentação |

---

## 👥 Equipe

- **Pamella Raquel** — Arquitetura, simulação e programação 
- **Renylle Rolim** — Relatórios, documentação 
- **Guilherme Apolonio** — Comunicação com a comunidade  

---

## 📊 Metas e Indicadores

- **Meta 1:** Protótipo funcional no SimulIDE até 20/10  
  - Indicador: sistema arma/desarma e aciona o buzzer corretamente

- **Meta 2:** Código final revisado até 05/11  
  - Indicador: firmware funcionando sem erros na simulação

- **Meta 3:** Relatório final entregue até 10/11  
  - Indicador: documentação completa e aprovada pelo docente


---


