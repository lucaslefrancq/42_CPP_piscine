/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucaslefrancq <lucaslefrancq@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 12:58:37 by lucaslefran       #+#    #+#             */
/*   Updated: 2020/12/17 17:41:00 by lucaslefran      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:

		class GradeTooHighException : public std::exception
		{
			public:

				GradeTooHighException() throw();
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:

				GradeTooLowException() throw();
				virtual const char* what() const throw();
		};

		class IsntSigned : public std::exception
		{
			public:

				IsntSigned() throw();
				virtual const char* what() const throw();
		};

		Form(const std::string& name = "AE44", const int gradeToSign = 50,
				const int gradeToExecute = 30);
		virtual ~Form();

		Form(const Form& copyObj);
		Form& operator=(Form& assignObj);
		friend void swap(Form& a, Form& b);

		const std::string getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		void beSigned(Bureaucrat& brct);
		virtual void execute(const Bureaucrat& executor) const = 0;
		void checkAuthorizations(const Bureaucrat& executor) const;

	private:

		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;
};

std::ostream& operator<<(std::ostream& output, Form& form);

#endif