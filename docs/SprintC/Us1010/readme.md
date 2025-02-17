# US 1010 - As Customer Manager, I want to open or close phases of the process for a job opening.

## 1. Context

This task, identified as "US 1010", is part of the Customer Manager feature. The goal of this task is to allow the customer manager to change the phase status of the recruitment process of a determined job opening.

## 2. Requirements

### 2.1. Client clarifications

#### 2.1.1. General questions

- **Q16**: Relativamente à secção 2.2.1 e às fases do processo de recrutamento, para passarmos para a fase seguinte a anterior tem de fechar ou podemos avançar sem ter a anterior fechada?
- **A16**: A resposta curta é que as fases devem ser sequenciais e não sobrepostas. Quando fecha uma fase abre a próxima. A US 1007 prevê a definição das fases. A US 1010 prevê a abertura e fecho de fases do processo. A decisão do Customer Manager de fechar uma fase deve assumir que o processo avança para a próxima fase automaticamente (independentemente das datas definidas para as fases).


- **Q62**: US1007/US1010. Segundo estas US's e a Q16, cada Job Opening deve ter fases definidas. Nas perguntas Q23, Q32 e Q45 é referido o estado da candidatura. A fase da Job Opening e o estado da candidatura são conceitos separados ou referem-se ao mesmo?
- **A62**: Tal como referido anteriormente, estão relacionados mas são conceitos diferentes. 


- **Q92**: Processo de Setup de uma Job Opening – Tendo em conta a US1007, de setup das diferentes fases do processo de recrutamento, gostaríamos que nos fosse esclarecido se, caso seja selecionada uma fase de Interview, é necessário haver uma ligação direta com a US1011, seleção de um interview model, ou serão funcionalidades separadas? Na eventualidade de serem separadas, passa então um recruitment process a ser válido apenas após a seleção de um interview model?
- **A92**: Suponho que a minha reposta seja similar à da pergunta anterior (Q91). Posso adiantar que podemos considerar que a empresa para já pretende usar sempre um processo de avaliaçao de entrevistas “automático”, pelo que este deve estar definido para se poderem “executar/processar” as entrevistas.


- **Q95**: Job Openings Ativas – A resposta à questão Q68 suscitou-nos algumas dúvidas sobre uma job opening no estado "ativa". Em que instante uma job opening se torna ativa? É quando é criada e tem um conjunto de requisitos associada a si? É quando está ligada a um processo de recrutamento ainda a decorrer? Agradecíamos alguns esclarecimentos.
- **A95**: No contexto da Q68 a referência a activa surge no contexto de datas. Uma job opening cujo processo já tenha terminado não está ativa.


- **Q143**: Open or close phases of the process for a job opening. – Quando o Customer Manager deseja abrir ou fechar uma fase de recrutamento, este deve ter a oportunidade de escolher qual fase deseja abrir ou fechar, ou automaticamente ele avança para a próxima fase, isto é fecha a fase atual e abre a seguinte.
- **A143**: Já respondida em Q16. Mas, resumindo, a ideia desta US é permitir avançar nas fases de um job opening. As fases devem ser sempre sequenciais. Podemos considerar que o fecho de uma fase resulta na abertura da fase seguinte (e o avançar para a fase seguinte, significa fechar a anterior). Não deve ser possível “saltar” fases, a não ser fases que não façam parte do processo (por exemplo, se não tiver entrevistas).


- **Q147** Gostaria de saber em quê que consiste abrir ou fechar as fases de uma job opening, tendo em conta a US1007 as datas já foram definidas para cada fase.
- **A147** Por favor ver Q16 (e outras perguntas sobre o mesmo tema). Esta US permite que o processo mude de fase (tipicamente para avançar no processo). As fases têm datas mas, como referido em Q16, podemos “ativar” uma fase mesmo que ainda não estejamos no seu intervalo temporal. As datas das fases são “indicativas”, no sentido em que sugerem, em particular ao Customer Manager, como gerir temporalmente o processo. Existem “operações” que devem acontecer quando a fase respetiva esta “ativa”.


- **Q149** No ultimo sprint foi definido as datas em que começa cada fase de uma job opening, neste é possivel fechar e abrir fases. A minha pergunta seria a seguinte, caso se queira fechar uma fase antes da seguinte começar, o inicio dessa seguinte fase é antecipado? No cenário que já tenho passado a data de inicio de uma fase y tendo a x (antecessora) sido fechado, caso se queira re-abrir a fazer x, é possivel? Ou o sistema deve proibir essa tentativa visto violar as datas definidas?
- **A149** Ver Q147 e Q16. A “mudança” de fases para “recuar” deve ser possível caso a fase que se deseje “abandonar” ainda não esteja, de facto, a ser “executada/ativa”. Por exemplo, se estou na fase de screening e já comecei a verificar requisitos de candidatos não faz sentido poder “regressar” à fase de application. Mas se eu estava na fase de application e decidi passar para a próxima (de screening) e passado algum tempo quero regressar à anterior (por exemplo, porque me enganei e ainda estou a receber candidaturas), devo poder faze-lo se ainda não tiver feito nenhuma “operação/processamento” especifico da fase de screening. No que se refere ao avançar deve-se aplicar um principio semelhante: deve ser possível avançar para a próxima fase se a anterior estiver “concluída”, por exemplo, posso avançar para as entrevistas se o screening estiver concluído, ou seja, se todos os candidatos foram verificados e notificados. Tipicamente/normalmente, as fases são para avançar de forma sequencial.


- **Q168** O utilizador deve escolher a fase que quer abrir ou fechar?
- **A168** Sem querer condicionar a UI/UX, penso que uma possibilidade seria o sistema apresentar a fase atual do processo e indicar o que é possível fazer. Se for possível avançar ou recuar, deve indicar que é possível e qual a fase resultante. Se não (ainda) possível avançar/recuar deve indicar a justificação desse facto.


#### 2.2.2 Our Team questions

- **Q161** O sistema para a Us1010 deve fazer validações de, por exemplo, o utilizador não pode abrir a fase de interview se o interview model ainda não tiver sido definido, ou o utilizador pode mudar de fase mas não vai conseguir, neste caso, executar o processo de avaliação de entrevistas enquanto não tiver um interview specification atribuído?
- **A161** Penso que poderá fazer isso. O que não deve conseguir é fazer entrevistas sem ter o interview model especificado

- **Q?**: US1010. Na questão 149 referiu que deve ser possível "recuar" de fase em condições específicas. A minha dúvida é se essa funcionalidade deve estar associada a esta User story, porque já referiu na A143 que nesta Us o objetivo é fechar a fase anterior e abrir a seguinte.
- **A**: See A168, similar answer.

- **Q171**: Consideramos que uma fase "open" não é o mesmo que uma fase "active". A fase "open" é uma fase que está disponível para ser executada, enquanto que a fase "active" é uma fase que está a ser executada. Concorda com esta distinção? Porque se o sistema quando fecha uma fase automaticamente considera a fase seguinte como "open" e se "open" for o mesmo que "active/in progress" então nunca vai ser possível "recuar" de fase.
- **A171**: Sim, penso que o que refere está de acordo com o que tentei explicar nas perguntas anteriores sobre esta US. Usei o termo “open” e “close” para indicar a abertura e o fecho das fases. Usei o termo “active” para indicar que alguma operação especifica da fase já teria sido executada (ou estava em execução) e consierava então essa fase como “activa”, o que significava que não podia mudar de fase enquanto essas “operações” não terminassem.

- **Q196**: Se estiver na primeira fase e se esta estiver no estado "open" posso recuar a fase e colocar o recruitment process como não começado?
- **A196**: Parece-me um caso particular das repostas anteriores deste tema.

- **Q195**: Já falou da possibilidade de reabrir uma fase quando uma fase se encontra no estado "open". A minha dúvida é se por exemplo a fase resume_screen se estiver concluída mas não estiver fechada pode ser colocada em progresso. Resumindo, quando uma fase está concluída devemos dar a possibilidade de fechar a fase e abrir a seguinte e também a possiblidade de voltar ao estado "in progress"?
- **A195**: Não consigo dar uma resposta clara pois existem alguns conceitos que carecem esclarecimento: “resume_screen”, “in progress”, etc. O que posso reforçar é que devem sempre garantir que a consistência do sistema se mantém.

- **Q196** Se estiver na primeira fase e se esta estiver no estado "open" posso recuar a fase e colocar o recruitment process como não começado?
- **A196** Parece-me um caso particular das repostas anteriores deste tema.

- **Q201** Em termos de estados da fase, os estado concluída e fechada são sinónimos ou representam conceitos diferentes? Deu um exemplo para a fase de "screening" que encontra-se concluída quando todos os candidatos forem verificados e notificados. Consegue dar uma explicação para as outras fases existentes, quando é que as podemos considerar fechadas.?
- **A201** Quando, em questões anteriores sobre este tópico, usei o termos concluído era no sentido de indicar que as atividades relativas ao “propósito” da fase tinham sido terminadas, concluídas, portanto estariam reunidas as condições para poder avançar para a fase seguinte (i.e., fechar a atual). Quando às condições para cada fase penso que devem pensar no problema e tentar identificá-las. Como está colocada a questão parece-me muito ampla e julgo que devem conseguir chegar a elas através da análise detalhada do problema. Mas se tiverem questões mais especificas posso tentar responder.



## 3. Analysis

### Dependencies

-**UC 1007**: This UC is responsible for creating and setuping the phases of a job opening.
-**UC 2002**: This UC register applications in the job opening and is responsible to change the state of the application phase to active when regists the first applications and to change the state to concluded when doesn`t want to register more applications
-**UC 1013**: This UC is responsible for the "ranking" of the applications and is responsible to change the state of the analysis phase to active when the ranking starts and to concluded when the ranking is done
-**UC 1015/1016**: The Uc 1015 is responsible for evaluating the requirements of the applications and the UC 1016 is responsible for notifying the candidates of the final result. Both are responsible to change the state of the screening phase to active when the evaluation starts and to concluded when the evaluation and notifications of the results is done
-**UC 1018**: This UC is responsible for the interviews evaluation and is responsible to change the state of the interview phase to active when the evaluation starts and to concluded when the evaluation is done
-**UC 1020**: This UC is responsible for the notification of the final result of the recruitment process and is responsible to change the state of the result phase to active when the final result starts being notified and to concluded when the final result notification is done

### Business Rules

-**BR1**: When a phase is closed, the next phase must be opened automatically.

-**BR2**: The open/close of the phases does not depend on dates defined for each phase, i.e the dates are only indicatives not mandatory so the decision of the actual close/open of a phase will always be on the user that is assigned to it.

-**BR3**: It should not be possible to “skip” phases, unless phases that are not part of the process (for example, if there are no interviews).

-**BR4**: The system should allow the user to go back to a previous phase if the current phase is not yet being executed.

-**BR5**: The system should allow the user to go to the next phase only if the previous phase is completed.

-**BR6**: When the recruitment process starts(when the first phase is opened) the job opening becomes active.

-**BR7**: When the recruitment process ends(when the last phase is closed) the job opening becomes inactive.

-**BR8**: When we rolback a phase, it closes the phase that was open and the previous phase is put in progress/active.

-**BR9**: A screening phase in concluded when all applications are verified and notified.

-**BR10**: A interview phase is concluded when all interviews are done.

-**BR11**: A analysis phase is concluded when the rank of every application is done.

-**BR12**: The result phase is concluded when all the candidates are notified of the final result

### Interaction between User and System

-**Interaction1**: The user selects the option to open/close a phase

-**Interaction2**: The system show the actual phase  and the possible actions that the user can do accordingly with state the phase is at

-**Interaction3**: The user selects between the options given by the system

-**Interaction4**: System show a success/insuccess message


## 4. Design

- Used the standard base structure of the layered application

### 4.1. Sequence Diagram
![Sequence Diagram](SdUs1010.svg)

### 4.2 State Diagram
![State Diagram](diagramAjudaEntendimentoUs.drawio.png)

### 4.3 Domain Classes Used

-Phase
-PhaseState
-RecruitmentProcess
-JobOpening
-JobOpeningState

### 4.3 Controller

-OpenClosePhaseController - For opening or closing a phase of a job opening

### 4.4 Repository

-JobOpeningRepository

### 4.5 Methods Implemented

#### 4.5.1 In Job Opening Class

-void changePhase() - Call the method to change the phase state for the recruitment process and manages the state of the job opening accordingly with phase next state.

#### 4.5.2 In Recruitment Process Class

-closeOpenPhaseAndOpenPhaseBefore() - Close the actual phase and open the previous phase(except for the application phase)
-returnNotClosedPhase() - Return the phase that is not closed
-movesNextPhase() - Moves the recruitment process to the next phase
-previousPhase() - Return the previous phase
-returnNextPhase() - Return the phase that will be the next of the recruitment process
-hasRecruitmentStarted() - Return if the recruitment process has started
-executeActionForOpenClosePhaseAccordinglyWithAvailableChoice() - Method that will execute the action according to the state that the phase is at
-messageForOpenClosePhase() - Return the message option for the open/close phase action

#### 4.5.3 In Phase Class

-openPhase() - Open the phase
-closePhase() - Close the phase

## 5. Test Plan

### 5.1. Test For JobOpening Class

#### 5.1.1. Test For Business Rules

-**Test 1**: testJobOpeningStateChangesToActiveWhenFirstPhaseStarts
-**Test 2**: testJobOpeningStateChangesToInactiveWhenLastPhaseEnds
-**Test 3**: testJobOpeningStateChangesToInactiveWhenRollbackFirstPhase

### 5.2. Test For RecruitmentProcess Class

#### 5.2.1. Tests For Business Rules

For each phase we tested the following scenarios:
1. Move to next phase when the actual phase is concluded
2. Move to next phase when the actual phase is not concluded
3. Move to next phase when the actual phase is not started

For these tests:
1. The actual phase should close and the next phase should open, unless in the case where the actual phase is the last phase of the recruitment process or when the recruitment process didn't started
2. The phases state should not change (throw exception)
3. The phases can rollback to the previous phase closing the actual one and opening the previous one


The following tests were conducted:

- `testChangeNextPhaseWhenIsAtResultPhaseAndResultPhaseIsFinished`
- `testChangeNextPhaseWhenIsAtResultPhaseAndResultPhaseIsInProgress`
- `testChangeNextPhaseWhenIsAtResultPhaseAndResultPhaseIsNotInProgress`

- `testChangePhaseWhenIsAtAnalysisAndPhaseIsNotInProgress`
- `testChangePhaseWhenIsAtAnalysisAndPhaseIsInProgress`
- `testChangePhaseWhenIsAtAnalysisAndPhaseIsFinished`

- `testChangePhaseWhenIsAtInterviewAndPhaseIsNotInProgress`
- `testChangePhaseWhenIsAtInterviewAndPhaseIsInProgress`
- `testChangePhaseWhenIsAtInterviewAndPhaseIsFinished`

- `testChangePhaseWhenIsAtScreeningAndPhaseIsNotInProgress`
- `testChangePhaseWhenIsAtScreeningAndPhaseIsInProgress`
- `testChangePhaseWhenIsAtScreeningAndPhaseIsFinished`

- `testChangePhaseWhenIsAtApplicationAndPhaseIsConcluded`
- `testChangePhaseWhenIsAtApplicationsAndPhaseIsInProgress`
- `testChangePhaseWhenIsAtApplicationPhaseAndIsNotInProgress`

#### 5.2.2. Tests to Method that returns the message option for the open/close phase

For print test did only tests for the diferent messages that can be returned.

- `testPrintMoveNextPhaseLastPhaseScenario`
- `testPrintRollbackNotFirstPhaseScenario`
- `testPrintPhaseMoveNextPhaseScenario`
- `testPrintApplicationPhaseRollbackFirstPhaseScenario`


