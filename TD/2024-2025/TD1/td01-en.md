## Exercise: Structuring and Managing a Bank Account in C++ with Git Versioning

**Educational Objective:**  
This exercise aims to introduce students to object-oriented problem modeling using C++ and introduce Git for versioning. You will first reflect on a general solution in teams before writing any code. The idea is that if the solution is well-designed, the code will be simple to write. If the reflection is neglected, the code will become complex and hard to maintain.

---

## Task

**Context:**  
Your task is to model a simple system for managing bank accounts. Each bank account must be associated with several essential pieces of information: an **account number**, a **client** (account owner), and a **balance** representing the available funds. Additionally, you will need to implement several common **operations** on the account, such as:

- **Withdrawal**: withdrawing money if the balance is sufficient.
- **Deposit**: adding money to the account.
- **Transfer**: allowing funds to be transferred between accounts.
- **Display Information**: showing the account's information, including the balance.

The project will be structured into two phases: one **reflection phase** without writing any code, followed by an **implementation phase** in C++.

---

### 1. Reflection Phase (in teams) - **No code writing at this stage!**

**Team Formation:**  
Work in teams of 4 to 6 people. This collaborative reflection phase will allow you to exchange ideas, analyze different approaches, and decide on the best structure to solve the problem.

**Problem Analysis:**  
- Identify and define the problem to be solved. What essential data does a bank account need to store? What operations must the account support?

**Objectives of the Reflection:**
- **Data to Store:**
  - Consider what data will be necessary to model a bank account. For example:
    - **Account Number**: What data type would be appropriate?
    - **Client**: Should client information be modeled in a dedicated structure?
    - **Balance**: How will the account balance be stored and managed efficiently?
    
- **Operations to Implement:**
  - Think about the actions that should be possible on the account:
    - **Withdrawal of funds**.
    - **Depositing funds**.
    - **Transferring funds** between accounts.
    - **Displaying account information**.

**Organization of Data and Type Choices:**  
- **Encapsulation and Abstraction**: How will you protect sensitive account data (such as the balance) while providing methods to interact with that data?
- **Classes and Responsibilities**:  
  - Propose an initial sketch of the class or classes you will create. What will the private attributes and public methods be?
  - How will you organize the interactions between different classes (if necessary)?

**Exchanging Ideas:**  
- Once the ideas are structured, discuss in your group the different proposed solutions. Justify your choices and highlight the advantages and disadvantages of each approach. Then, select the solution that seems the simplest, most extensible, and best suited to the problem.

---

**Deliverables at the End of This Phase:**
- A **simplified diagram** of the classes you plan to implement (e.g., a simple UML diagram).
- A **list of methods** to implement for each class, along with their descriptions.
- A **clear work plan** that you will follow during the implementation phase (this plan will also serve as the basis for Git versioning).

---

### 2. Implementation Phase

Once the reflection is completed and validated by your team, you can move on to the project implementation, following the defined plan.

**Modeling Classes:**
- Implement the classes and their methods in C++, as discussed during the reflection phase.
- Ensure that each method functions correctly according to the established plan.

**Using Git for Version Control:**
- **Initialization**: Create a Git repository for your project with `git init`.
- **First Version**: Once the main class is created, save a first version of the code with `git add .` and `git commit -m "Created the BankAccount class"`.
- **Versioning**: At each important step (adding methods, testing, fixing issues), use Git to save the changes:
  - `git commit -m "Added method for depositing to an account"`
  - `git commit -m "Implemented error handling for withdrawals"`
- **Branches**: Use branches to experiment with new features or fix bugs without affecting the main version (`git checkout -b <branch-name>`).
- **Merging**: Once a branch is validated, merge it into the main branch (`git merge <branch-name>`).

**Code Validation:**
- Test your program, which interacts with your classes, to validate the different functionalities (withdrawals, deposits, transfers).
- Use Git to explore previous versions of the code if necessary (`git log`, `git checkout`).

**Refactoring and Improvements:**  
- After validating the first functional version, think about possible improvements. Use Git to manage these improvements progressively.

---

## Technical Constraints:

- You must use object-oriented programming in C++.
- Use Git to manage all development stages of the project.
- Implement simple error handling (e.g., prevent a withdrawal if the balance is insufficient).
- Make sure to use correct data encapsulation: attributes should be private and accessible through appropriate public methods.
- You will need to write clean, well-structured, and well-commented code.

---

## Git - Version Control:

1. **Repository Initialization:**  
   Create a local repository in your working directory by running `git init`.
  
2. **First Code Version:**  
   Once you’ve created the structure of the main class, save the first version with `git add .` and `git commit -m "Created the BankAccount class"`.

3. **Tracking Changes:**  
   For each significant modification (method addition, bug fixes), commit a new version. For example:
   - `git commit -m "Added method for depositing to an account"`
   - `git commit -m "Implemented error handling for withdrawals"`

4. **Branching:**  
   If you decide to add a new feature, such as transferring funds, create a dedicated branch:
   - `git checkout -b transfer-feature`
   - Once the feature is stable, merge it into the main branch: `git checkout main` then `git merge transfer-feature`.

5. **Exploring History:**  
   Use `git log` to see the history of changes.
   - If necessary, return to a previous version with `git checkout <commit-hash>`.

---

## Reflection Questions on Git:

- Why is it important to use Git for managing different versions of your project?
- How does Git facilitate collaboration on a project, even in the case of a personal project?
- What is the advantage of using branches to test features before integrating them into the main version?

---

This exercise will help you not only practice object-oriented modeling but also become familiar with using Git, an essential tool for managing version history and collaboration in software development.

---

This version of the exercise integrates both object-oriented programming and Git, helping students develop good habits for structuring and managing code over time.
