
<div>
    <center style="width: 80%;">
    <img src="https://www.uerj.br/wp-content/uploads/2019/07/logo-70anos-site.svg" alt="Trulli" width="400" align="center">
    </center>
</div>


# CBA-2022 - Código fonte em c++ para implementação de PLLs monofásicos em FPGA 


Este repositório contem os códigos fonte utilizados para implementação dos PLLs utilizando o  módulo de síntese de alto nível (HLS Synthesis ou Vitis HLS 2020.2) do software VIVADO 2020.2. A pasta <code>src</code> cotem os seguintes diretórios:

* <code>APF-SRF-PLL:</code> cotem os códigos para implementação do APF PLL.
* <code>SOGI-SRF-PLL:</code> cotem os códigos para implementação do SOGI PLL.
* <code>SIN-GEN:</code> cotem os códigos para implementação do gerador de sinais utilizado nos testes.



## Utilização

Para implementação dos IPs, deve-se utilizar o software <code>Vitis 2020.2</code> que vem no pacote [Vivado Design Suite - HLx Editions 2020.2](https://www.xilinx.com/support/download/index.html/content/xilinx/en/downloadNav/vivado-design-tools/archive.html). Para criar o projeto no Vitis, o usuário deverá: 

* Abrir o Vitis e clicar em criar novo projeto 
* Adicionar os arquivos .cpp e .h do IP desejado na aba <code>Add/remove design files</code>.  
* Ainda na aba <code>Add/remove design files</code>, selecionar a função top, <code>APF_SRF_PLL_x64</code>, <code>SOGI_SRF_PLL_x64</code> ou <code>sin_gen_x64_B</code>, dependendo do IP desejado.
* Selecionar o FPGA desejado na aba <code>Solution configuration</code>
* Clicar em finalizar.

É importante lembrar que, embora os IPs possam ser sintetizados para diferentes modelos de FPGAs da Xilinx, o projeto foi testado apenas para a placa de desenvolvimento [Xilinx Artix-7 FPGA AC701 Evaluation Kit](https://www.xilinx.com/products/boards-and-kits/ek-a7-ac701-g.html).

Após a criação do projeto, o IP pode ser sintetizado a partir de um click na opção <code>Run</code> da barra de ferramentas.









## Autores



<div>
<center style="width: 80%;">
        <div> <b>Fabiano da Silva Catão</b></div>
        <div> Universidade do Estado do Rio de Janeiro</div>
        <div> Estudante de graduação em eng. elétrica</div>         
  </center>
</div>


<br>



<div>
<center style="width: 80%;">
        <div> <b>Dayane Mendonça Lessa</b></div>
        <div> Universidade do Estado do Rio de Janeiro</div>
        <div> Programa de Pós-Graduação em Eng. Eletrônica</div>
        <div> Mestre em eng. eletrônica</div>        
  <a href="http://lattes.cnpq.br/4092797440321688">
      <img  src="https://drive.google.com/uc?export=view&id=1js8arR8CLrsSreMxCyA87mpukcoGvdWS" width='22'/>
  </a>
  <a href="https://orcid.org/0000-0003-1643-0614">
      <img  src="https://drive.google.com/uc?export=view&id=1knsutHKTRx26iYIJBn6S1eOsrliRdQ4n" width='22'/>
  </a>
  </center>
</div>



<br>







<div>
<center style="width: 80%;">
        <div> <b>Cleiton Magalhães Freitas</b></div>
        <div> Universidade do Estado do Rio de Janeiro</div>
        <div> Departamento de Engenharia Elétrica</div>
        <div> Professor Adjunto</div>        
        <div> cleiton.freitas@uerj.br</div>
        <a href="https://publons.com/researcher/1561461/cleiton-magalhaes-freitas/">
      <img  src="https://drive.google.com/uc?export=view&id=16zF6D89O-Ciso6XSNbZtcjOWdqjDGo1n" width='22'/>
  </a>
  <a href="http://lattes.cnpq.br/8580465355265899">
      <img  src="https://drive.google.com/uc?export=view&id=1js8arR8CLrsSreMxCyA87mpukcoGvdWS" width='22'/>
  </a>
  <a href="https://orcid.org/0000-0002-6300-0521">
      <img  src="https://drive.google.com/uc?export=view&id=1knsutHKTRx26iYIJBn6S1eOsrliRdQ4n" width='22'/>
  </a>
   <a href="https://www.researchgate.net/profile/Cleiton_Freitas">
      <img  src="https://drive.google.com/uc?export=view&id=1dUhk9H12d3-QxrC1rOMMUGklOu-XF3nI" width='22'/>
  </a>
  <a href="https://github.com/cleitoncmf">
      <img  src="https://drive.google.com/uc?export=view&id=1ASXoi4B-Xamn-qqWOpDXWDMzcNzDQXym" width='22'/>
  </a>
  <a href="https://scholar.google.com.br/citations?user=Nq_YDvIAAAAJ&hl=pt-BR&oi=ao">
       <img  src="https://drive.google.com/uc?export=view&id=15qNeZR6CUKOe0KrLEqhXbzRGlY3gb4Yq" width='22'/>
  </a>
  </center>
</div>

<br>


<div>
<center style="width: 80%;">
        <div> <b>Michel Pompeu Tcheou</b></div>
        <div> Universidade do Estado do Rio de Janeiro</div>
        <div> Programa de Pós-Graduação em Eng. Eletrônica</div>
        <div> Professor Adjunto</div>        
        <div> mtcheou@uerj.br</div>
  <a href="http://lattes.cnpq.br/9868296846852777">
      <img  src="https://drive.google.com/uc?export=view&id=1js8arR8CLrsSreMxCyA87mpukcoGvdWS" width='22'/>
  </a>
  <a href="https://orcid.org/0000-0003-2068-2865">
      <img  src="https://drive.google.com/uc?export=view&id=1knsutHKTRx26iYIJBn6S1eOsrliRdQ4n" width='22'/>
  </a>
   <a href="https://www.researchgate.net/profile/Michel-Tcheou">
      <img  src="https://drive.google.com/uc?export=view&id=1dUhk9H12d3-QxrC1rOMMUGklOu-XF3nI" width='22'/>
  <a href="https://scholar.google.com.br/citations?user=SKQhKacAAAAJ&hl=pt-BR">
       <img  src="https://drive.google.com/uc?export=view&id=15qNeZR6CUKOe0KrLEqhXbzRGlY3gb4Yq" width='22'/>
  </a>
  </center>
</div>



<br>

<div>
<center style="width: 80%;">
        <div> <b>Luís Fernando Corrêa Monteiro</b></div>
        <div> Universidade do Estado do Rio de Janeiro</div>
        <div> Programa de Pós-Graduação em Eng. Eletrônica</div>
        <div> Professor Associado</div>        
        <div> lmonteiro@uerj.br</div>
  <a href="http://lattes.cnpq.br/9876372612922406">
      <img  src="https://drive.google.com/uc?export=view&id=1js8arR8CLrsSreMxCyA87mpukcoGvdWS" width='22'/>
  </a>
  <a href="https://orcid.org/0000-0002-8537-0785">
      <img  src="https://drive.google.com/uc?export=view&id=1knsutHKTRx26iYIJBn6S1eOsrliRdQ4n" width='22'/>
  </a>
   <a href="https://www.researchgate.net/profile/Luis-Monteiro-2">
      <img  src="https://drive.google.com/uc?export=view&id=1dUhk9H12d3-QxrC1rOMMUGklOu-XF3nI" width='22'/>
  <a href="https://scholar.google.com/citations?user=r-eYhXIAAAAJ&hl=en">
       <img  src="https://drive.google.com/uc?export=view&id=15qNeZR6CUKOe0KrLEqhXbzRGlY3gb4Yq" width='22'/>
  </a>
  </center>
</div>


