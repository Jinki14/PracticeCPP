# 📅 **Daily Logs**

---

## 📌 **2025-05-29**

### **LinkedListStack1 구현**

- 단일 연결 리스트를 이용한 스택 구현 (int 저장)
- 파일 구조
  - `LinkedListStack1/`
    - `main.cpp` : 테스트용 메인 함수
    - `LLStack.h` / `LLStack.cpp` : 스택 클래스 선언 및 구현
    - `Node.h` / `Node.cpp` : 노드 클래스 선언 및 구현
- 주요 기능
  - `push`, `pop`, `peek`, `isEmpty`, `printAll`, `clear` 구현
- 컴파일 방법
  ```
  g++ main.cpp LLStack.cpp Node.cpp -o myStackPractice1
  ./myStackPractice1
  ```
#### 💭 **내 생각 (Thoughts)**

- 아직까진 익숙하지 않음. 더욱 연습할 필요가 있음
- 내일부터는 타임어택으로 해봐야겠음
- pop과 peek 할 때 빈 스택 체크(isEmpty) 까먹지 말 것
- 나중엔 예외처리(try-catch)도 도입해서 안정성 높이는 것도 좋을 듯

---

## 📌 **2025-06-01:** 

### **LinkedListStack2 구현**

- LinkedListStack1과 동일

#### 💭 **내 생각 (Thoughts)**

- 여전히 isEmpty를 까먹고 있다
- 그리고 아직 백지에 끝까지 코딩을 짜는데 어려움이 있다
- 계속 LLStack1 슬쩍슬쩍 보고 있음

---

## 📌 **2025-06-04:** 

### **LinkedListQueue1 구현**

- 단일 연결 리스트를 이용한 큐 구현 (typename T 저장)
- 파일 구조
  - `LinkedListStack1/`
    - `main.cpp` : 테스트용 메인 함수
    - `LLStack.h` : 스택 클래스 선언 및 구현
    - `Node.h` : 노드 클래스 선언 및 구현
- 주요 기능
  - `enqueue`, `dequeue`, `frontItem`, `rearItem`, `printAll`, `clear` 구현
- 컴파일 방법
  ```
  g++ main.cpp -o myQueuePractice1
  ./myQueuePractice1

#### 💭 **내 생각 (Thoughts)**

- 사실 LinkedListQueue를 만들기 이전에 CircleQueue를 만들었었기에 쉬웠음
- 그래서 단일 타입을 담는 queue 말고 아예 template으로 typename T를 담는 queue로 만들어 봤음 (AI 도움 있음)
- 이거도 계속 만들어 보면서 queue와 template에 익숙해져 봐야겠음

---

## 📌 **2025-06-XX:** 

---