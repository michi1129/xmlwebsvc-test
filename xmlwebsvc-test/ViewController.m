//
//  ViewController.m
//  xmlwebsvc-test
//
//  Created by michi on 13/10/04.
//  Copyright (c) 2013年 michi. All rights reserved.
//

#import "ViewController.h"
#import "TempConvert.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)dealloc {
    [_btn1 release];
    [super dealloc];
}

- (void)viewDidUnload {
    [self setBtn1:nil];
    [super viewDidUnload];
}

- (IBAction)btn1_down:(id)sender {
    TempConvertSoap *soap = [TempConvert TempConvertSoap];
    soap.logXMLInOut = YES;
    
    TempConvert_CelsiusToFahrenheit *p = [[TempConvert_CelsiusToFahrenheit alloc] init];
    p.Celsius = @"30";
    
    TempConvertSoapResponse *response = [soap CelsiusToFahrenheitUsingParameters:p];
//    NSLog(@"res:%@",response);
//    NSLog(@"body: %@",response.bodyParts);
    
    TempConvert_CelsiusToFahrenheitResponse *result = [response.bodyParts objectAtIndex:0];
    NSLog(@"%@F",result.CelsiusToFahrenheitResult);
}

@end
