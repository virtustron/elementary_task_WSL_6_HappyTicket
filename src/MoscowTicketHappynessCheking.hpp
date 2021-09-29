#pragma once
#include "TicketHappynessChecking.hpp"

class MoscowTicketHappynessCheking :
    public TicketHappynessChecking
{
public:
    bool IsTicketHappy(Ticket ticket);
};

