/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN1VIEWBASE_HPP
#define SCREEN1VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/mixins/ClickListener.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/mixins/Draggable.hpp>

class Screen1ViewBase : public touchgfx::View<Screen1Presenter>
{
public:
    Screen1ViewBase();
    virtual ~Screen1ViewBase();
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::ClickListener< touchgfx::Container > container1;
    touchgfx::Image image1;
    touchgfx::Draggable< touchgfx::ClickListener< touchgfx::Image > > image6;
    touchgfx::Draggable< touchgfx::ClickListener< touchgfx::Image > > image5;
    touchgfx::Draggable< touchgfx::ClickListener< touchgfx::Image > > image4;
    touchgfx::Draggable< touchgfx::ClickListener< touchgfx::Image > > image3;
    touchgfx::Draggable< touchgfx::ClickListener< touchgfx::Image > > image2;
    touchgfx::Draggable< touchgfx::ClickListener< touchgfx::Image > > image12;

private:

};

#endif // SCREEN1VIEWBASE_HPP
