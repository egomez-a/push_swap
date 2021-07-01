/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:36:15 by egomez-a          #+#    #+#             */
/*   Updated: 2021/07/01 15:55:23 by egomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	orderthree(t_stack **stack)
{
	int	len;

	len = s_len(*stack);
	if (len == 1)
		return ;
	else if (len == 2 && (*stack)->num > (*stack)->next->num)
	{
		write(2, "sa\n", 3);
		sa_sb(stack);
		return ;
	}
	else if ((*stack)->num > (*stack)->next->num && (*stack)->next->num
		> (*stack)->next->next->num && (*stack)->next->next->num < (*stack)->num)
	{
		write(2, "sa\n", 3);
		sa_sb(stack);
		write(2, "rra\n", 4);
		rra_rrb(stack);
	}
	else if ((*stack)->num > (*stack)->next->num && (*stack)->next->num
		< (*stack)->next->next->num && (*stack)->next->next->num < (*stack)->num)
	{
		write(2, "ra\n", 3);
		ra_rb(stack);
	}
	else if((*stack)->num > (*stack)->next->num && (*stack)->next->num <
		(*stack)->next->next->num && (*stack)->next->next->num > (*stack)->num)
	{
		write(2, "sa\n", 3);
		sa_sb(stack);
	}
	else if((*stack)->num < (*stack)->next->num && (*stack)->next->num >
		(*stack)->next->next->num && (*stack)->next->next->num > (*stack)->num)
	{
		write(2, "sa\n", 3);
		sa_sb(stack);
		write(2, "ra\n", 3);
		ra_rb(stack);
	}
	else if((*stack)->num < (*stack)->next->num && (*stack)->next->num >
		(*stack)->next->next->num && (*stack)->next->next->num < (*stack)->num)
	{
		write(2, "rra\n", 4);
		rra_rrb(stack);
	}
	return;
}

void	orderlow(t_stack **stack)
{
	int len; 

	len = s_len(*stack);
	if (len == 1)
		return ;
	else if (len == 2 && (*stack)->num > (*stack)->next->num)
	{
		write(2, "sa\n", 3);
		sa_sb(stack);
	}
	else if (len == 3)
		orderthree(stack);
	printf("\n La solucion final\n");
	printarray(stack);
	return;
}

void	orderfive(t_stack **stack, t_stack **stackb)
{
	int i;
	
	i = 0;
	pa_pb(stack, stackb);
	pa_pb(stack, stackb);
	write(2, "pb\n", 3);
	write(2, "pb\n", 3);
	orderthree(stack);
	while (i < 2)
	{
		pa_pb(stackb, stack);
		write(2, "pa\n", 3);
		if ((*stack)->num > (*stack)->next->num && (*stack)->num > 
			(*stack)->next->next->num && (*stack)->num > (*stack)->next->next->next->num)
			{
				write(2, "ra\n", 3);
				ra_rb(stack);
			}
		else if ((*stack)->num > (*stack)->next->num && (*stack)->num < 
			(*stack)->next->next->num)
			{
				write(2, "sa\n", 3);
				sa_sb(stack);
			}
		else if ((*stack)->num > (*stack)->next->num && (*stack)->num > 
			(*stack)->next->next->num && (*stack)->num < (*stack)->next->next->next->num)
			{
				rra_rrb(stack);
				write(2, "rra\n", 4);
				sa_sb(stack);
				write(2, "sa\n", 3);
				ra_rb(stack);
				write(2, "ra\n", 3);
				ra_rb(stack);
				write(2, "ra\n", 3);
			}
		i++;
	}
	printf("\n La solucion final\n");
	printarray(stack);
	return;
}