/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:34:21 by egomez-a          #+#    #+#             */
/*   Updated: 2021/06/30 18:34:34 by egomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		sa_sb(t_stack **stack_ab)
{
	t_stack	*stack;

	stack = *stack_ab;
	if (stack && stack->next)
		swap(&stack->num, &stack->next->num);
	return (0);
}

int		ss(t_stack **stack_a, t_stack **stack_b)
{
	sa_sb(stack_a);
	sa_sb(stack_b);
	return (0);
}

int		pa_pb(t_stack **head_from, t_stack **head_to)
{
	t_stack	*temp;
	t_stack *stack_from;
	t_stack *stack_to;

	stack_from = *head_from;
	stack_to = *head_to;
	if (!stack_from)
		return (0);
	temp = stack_from;
	stack_from = stack_from->next;
	*head_from = stack_from;
	if (!stack_to)
	{
		stack_to = temp;
		stack_to->next = NULL;
		*head_to = stack_to;
	}
	else
	{
		temp->next = stack_to;
		*head_to = temp;
	}
	return (0);	
}

int 	ra_rb(t_stack **stack_ab)
{
	t_stack	*temptop;
	t_stack	*templast;
	t_stack *stack;

	stack = *stack_ab;
	if (!(stack && stack->next))
		return (0);
	temptop = stack;
	stack = stack->next;
	templast = stack;
	while (templast->next)
		templast = templast->next;
	templast->next = temptop;
	temptop->next = NULL;
	*stack_ab = stack;
	return (0);
}

int		rra_rrb(t_stack **stack_ab)
{
	t_stack	*templast;
	t_stack	*previous;
	t_stack *stack;

	stack = *stack_ab;
	if (!(stack && stack->next))
		return (0);
	templast = stack;
	while (templast->next)
	{
		previous = templast;
		templast = templast->next;
	}
	templast->next = stack;
	previous->next = NULL;
	*stack_ab = templast;
	return (0);
}

int		rr(t_stack **stack_a, t_stack **stack_b)
{
	ra_rb(stack_a);
	ra_rb(stack_b);
	return (0);
}
	
int		rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra_rrb(stack_a);
	rra_rrb(stack_b);
	return (0);
}