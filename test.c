/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:51:55 by egomez-a          #+#    #+#             */
/*   Updated: 2021/07/01 13:52:06 by egomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	test(t_stack **stack_a, t_stack **stack_b)
{
	printf("stack_a\n");
	printarray(stack_a);
	printf("stack_b\n");
	printarray(stack_b);
	printf("-------------\n");
	rra_rrb(stack_a);
	printf("rra\n");
	printf("stack_a\n");
	printarray(stack_a);
	printf("stack_b\n");
	printarray(stack_b);
	printf("-------------\n");
	pa_pb(stack_a, stack_b);
	printf("pa\n");
	printf("stack_a\n");
	printarray(stack_a);
	printf("stack_b\n");
	printarray(stack_b);
	printf("-------------\n");
	rra_rrb(stack_a);
	printf("rra\n");
	printf("stack_a\n");
	printarray(stack_a);
	printf("stack_b\n");
	printarray(stack_b);
	printf("-------------\n");
	pa_pb(stack_a, stack_b);
	printf("pa\n");
	printf("stack_a\n");
	printarray(stack_a);
	printf("stack_b\n");
	printarray(stack_b);
	printf("-------------\n");
	pa_pb(stack_a, stack_b);
	printf("pa\n");
	printf("stack_a\n");
	printarray(stack_a);
	printf("stack_b\n");
	printarray(stack_b);
	printf("-------------\n");
	ss(stack_a, stack_b);
	printf("ss_b\n");
	printf("stack_a\n");
	printarray(stack_a);
	printf("stack_b\n");
	printarray(stack_b);
	printf("-------------\n");
	rra_rrb(stack_b);
	printf("rrb\n");
	printf("stack_a\n");
	printarray(stack_a);
	printf("stack_b\n");
	printarray(stack_b);
	printf("-------------\n");
	rrr(stack_a, stack_b);
	printf("rrr\n");
	printf("stack_a\n");
	printarray(stack_a);
	printf("stack_b\n");
	printarray(stack_b);
	return ;
}