#ifndef CASH_OPERATION_H
#define CASH_OPERATION_H

class CashOperation {
public:
    virtual void processTransaction(double amount) = 0;
    virtual double getTotal() const = 0;
    virtual ~CashOperation() = default;
};

#endif