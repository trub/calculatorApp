//
//  ViewController.h
//  calculator
//
//  Created by Matthew Weintrub on 10/11/15.
//  Copyright (c) 2015 matthew weintrub. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;


@end

