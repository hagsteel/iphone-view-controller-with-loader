iPhone view controller with loader
==================================

View controller and table view controller with modal loader graphic

![screenshot](https://raw.github.com/jonashagstedt/iPhone-view-controller-with-loader/master/screenshot.png)

Implementation
----
* Add all the files in the repository to your project (including the loader background)
* Instead of inheriting from UIViewController, inherit from DPViewController (same goes for table view controller)
* call ```[self showLoader];``` when you want to show the loading graphic 
* call ```[self hideLoader];``` when you want to hide the loader

	
MyViewController.h
```
#import <UIKit/UIKit.h>
#import "DPTableViewController.h"

@interface MyViewController : DPTableViewController
@end
```

// MyViewController.m
```
#import "MyViewController.h"

@implementation MyViewController


- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    [self showLoader];
    // Do some data processing here that will call doneProcessing when done
}

- (void)doneProcessing {
    [self hideLoader];
}


@end
```
