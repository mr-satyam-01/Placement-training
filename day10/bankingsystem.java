package day10;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

interface account {
    void deposit(double amount);
    void withdraw(double amount);
    double calculateinterest();
    void viewbalance();
    int getaccountnumber();
}

class savingsaccount implements account {
    private int accountnumber;
    private double balance;
    private static final double interest_rate = 0.04;

    public savingsaccount(int accountnumber, double initialdeposit) {
        this.accountnumber = accountnumber;
        this.balance = initialdeposit;
    }

    @Override
    public void deposit(double amount) {
        balance += amount;
        System.out.println("Deposited $" + amount);
    }

    @Override
    public void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            System.out.println("Withdrawn $" + amount);
        } else {
            System.out.println("Insufficient funds");
        }
    }

    @Override
    public double calculateinterest() {
        return balance * interest_rate;
    }

    @Override

    public void viewbalance() {
        System.out.println("savings account balance: " + balance);
    }

    @Override
    public int getaccountnumber() {
        return accountnumber;
    }
}
// current account-----------------------------------------------------------
// ---------------------------------------------------------------------------

class currentaccount implements account {
    private int accountnumber;
    private double balance;
    private static final double overdraft_limit = 500;

    public currentaccount(int accountnumber, double initialdeposit) {
        this.accountnumber = accountnumber;
        this.balance = initialdeposit;
    }

    @Override
    public void deposit(double amount) {
        balance += amount;
        System.out.println("Deposited $" + amount);
    }

    @Override
    public void withdraw(double amount) {
        if (amount <= balance + overdraft_limit) {
            balance -= amount;
            System.out.println("Withdrawn $" + amount);
        } else {
            System.out.println("Withdrawl exceeds" + "overdraft" + "limit");
        }
    }

    @Override
    public double calculateinterest() {
        return 0.0;
    }

    @Override
    public void viewbalance() {
        System.out.println("current account balance: $" + balance);
    }

    @Override
    public int getaccountnumber() {
        return accountnumber;
    }
}
// bank class---------------------------------------------------------------
// ---------------------------------------------------------------------------

class bank {
    private List<account> accounts = new ArrayList<>();
    private static int nextAccountnumber = 1001;

    public void addaccount(account acc) {
        accounts.add(acc);

        System.out.println("Account created " + "with account number: " + acc.getaccountnumber());
    }

    public account findAccount(int accno) {
        for (account acc : accounts) {
            if (acc.getaccountnumber() == accno) {
                return acc;
            }
        }
        return null;
    }

    public int generateaccountnumber() {
        return nextAccountnumber++;
    }
}
// Main class---------------------------------------------------------------
// ---------------------------------------------------------------------------
public class bankingsystem {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        bank bank = new bank();
        while (true) {
            System.out.println("\n--- Banking system menu------");
            System.out.println("1. create savings account");
            System.out.println("2. create current account");
            System.out.println("3. Deposit");
            System.out.println("4. withdraw");
            System.out.println("5. view balance");
            System.out.println("6. calculate interest");
            System.out.println("7. Exit");
            System.out.println("choose option: ");
            int choice = scanner.nextInt();

            switch (choice) {
                case 1:
                case 2:
                    System.out.println("Enter initial" + "deposit; $");
                    double initial = scanner.nextDouble();
                    int accno = bank.generateaccountnumber();
                    account acc = (choice == 1)
                            ? new savingsaccount(accno, initial)
                            : new currentaccount(accno, initial);
                    bank.addaccount(acc);
                    break;

                case 3:
                    System.out.println("Enter account number: ");
                    int depacc = scanner.nextInt();
                    account depositacc = bank.findAccount(depacc);
                    if (depositacc != null) {
                        System.out.println("Enter deposit amount: $");
                        double depositeamount = scanner.nextDouble();
                        depositacc.deposit(depositeamount);
                    } else {
                        System.out.println("Account not found");
                    }
                    break;

                case 4:
                    System.out.println("Enter account number: ");
                    int wdacc = scanner.nextInt();
                    account withdrawacc = bank.findAccount(wdacc);
                    if (withdrawacc != null) {
                        System.out.println("Enter withdrawal amount: $");
                        double withdrawAmount = scanner.nextDouble();
                        withdrawacc.withdraw(withdrawAmount);
                    } else {
                        System.out.println("Account not found");
                    }
                    break;

                case 5:
                    System.out.println("Enter account number: ");
                    int vbacc = scanner.nextInt();
                    account balacc = bank.findAccount(vbacc);
                    if (balacc != null) {
                        balacc.viewbalance();
                    } else {
                        System.out.println("Account not found");
                    }
                    break;

                case 6:
                System.out.println("Enter account number: ");
                int intacc = scanner.nextInt();
                account interestacc = bank.findAccount(intacc);
                if(interestacc != null){
                    double interest = interestacc.calculateinterest();
                    System.out.println("Calculated interest: $" + interest);
                }else{
                    System.out.println("Account not found");
                }
                break;
                case 7:
                System.out.println("Thank you for banking with us!");
                scanner.close();
                return;
                default:
                System.out.println("Invalid option: ");
            }
        }
    }
}
