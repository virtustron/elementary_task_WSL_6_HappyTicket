#pragma once
#include "TicketHappynessChecking.hpp"

class PiterTicketHappynessChecking :
    public TicketHappynessChecking
{
public:
    bool IsTicketHappy(Ticket ticket);
};

