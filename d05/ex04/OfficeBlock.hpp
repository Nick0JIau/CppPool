#pragma once

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

class OfficeBlock
{
public:
    OfficeBlock(void);
    OfficeBlock(Intern *intern, Bureaucrat *signer, Bureaucrat *executor);
    ~OfficeBlock(void);
    OfficeBlock(OfficeBlock const& src);

    OfficeBlock& operator=(OfficeBlock const& src);

    void        setIntern(Intern &intern);
    void        setSigner(Bureaucrat &signer);
    void        setExecutor(Bureaucrat &executor);

    void        doBureaucracy(std::string name, std::string target);

    class NoIntern : public std::exception
    {
    public:
        NoIntern(void);
        ~NoIntern(void) throw();
        NoIntern(NoIntern const& src);

        const char* what(void) const throw();

        NoIntern& operator=(NoIntern const& src);
    };

    class NoSigner : public std::exception
    {
    public:
        NoSigner(void);
        ~NoSigner(void) throw();
        NoSigner(NoSigner const& src);

        const char* what(void) const throw();

        NoSigner& operator=(NoSigner const& src);
    };

    class NoExecutor : public std::exception
    {
    public:
        NoExecutor(void);
        ~NoExecutor(void) throw();
        NoExecutor(NoExecutor const& src);

        const char* what(void) const throw();

        NoExecutor& operator=(NoExecutor const& src);
    };

    class LowSignerGrade : public std::exception
    {
    public:
        LowSignerGrade(void);
        ~LowSignerGrade(void) throw();
        LowSignerGrade(LowSignerGrade const& src);

        const char* what(void) const throw();

        LowSignerGrade& operator=(LowSignerGrade const& src);
    };

    class LowExecutorGrade : public std::exception
    {
    public:
        LowExecutorGrade(void);
        ~LowExecutorGrade(void) throw();
        LowExecutorGrade(LowExecutorGrade const& src);

        const char* what(void) const throw();

        LowExecutorGrade& operator=(LowExecutorGrade const& src);
    };

    class IncorrectForm : public std::exception
    {
    public:
        IncorrectForm(void);
        ~IncorrectForm(void) throw();
        IncorrectForm(IncorrectForm const& src);

        const char* what(void) const throw();

        IncorrectForm& operator=(IncorrectForm const& src);
    };

private:
    Intern      *_intern;
    Bureaucrat  *_signer;
    Bureaucrat  *_executor;
};