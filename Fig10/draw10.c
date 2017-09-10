{
   int color1=2;
   int color2=4;
  TCanvas *c1 = new TCanvas("c1", "c1",1000, 800);
   c1->Range(-595.931,-0.004098378,4546.957,4.372951);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.1156609);
   c1->SetRightMargin(0.08405172);
   c1->SetTopMargin(0.08520599);
   c1->SetBottomMargin(0.1151685);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   TFile *f=new TFile("Fig10.root");
   gh1->SetMaximum(4);
   gh1->SetMinimum(0.5);

   gh2->SetLineStyle(1);
   gh3->SetLineStyle(1);
   ghr2->SetLineStyle(1);
   ghr3->SetLineStyle(1);

   
   gh1->SetLineColor(color2);
   gh2->SetLineColor(color2);
   gh3->SetLineColor(color2);
   ghr1->SetLineStyle(7);
   ghr1->SetLineColor(1);
   ghr2->SetLineColor(1);
   ghr3->SetLineColor(1);

   gh1->SetLineWidth(2);
   ghr1->SetLineWidth(2);
   
   gh2->SetLineWidth(1);
   gh3->SetLineWidth(1);
   ghr2->SetLineWidth(1);
   ghr3->SetLineWidth(1);
   TH1F *hh = new TH1F("hh","",9995,0,10993.4);
   hh->SetMinimum(0.5);
   hh->SetMaximum(4);
   hh->SetDirectory(0);
   hh->SetStats(0);

   grshade->SetFillStyle(3002);
   grshade->SetFillColor(41-3+3);

   //   grshade2->SetFillStyle(3013);
   grshade2->SetFillStyle(1001);
   grshade2->SetFillColor(15);

   ci = TColor::GetColor("#000099");
   hh->SetLineColor(ci);
 hh->SetLineColor(ci);
   hh->GetXaxis()->SetTitle("No. of Events");
   hh->GetXaxis()->SetRange(0,3500);
   hh->GetXaxis()->CenterTitle(true);
   hh->GetXaxis()->SetLabelFont(22);
   hh->GetXaxis()->SetTitleSize(0.05);
   hh->GetXaxis()->SetTitleOffset(0.94);
   hh->GetXaxis()->SetTitleFont(22);
   hh->GetYaxis()->SetTitle("#LT#chi^{2}_{#nu}#GT");
   //   hh->GetYaxis()->SetTitle("#LT#chi^{2}_/#nu#GT");
   hh->GetYaxis()->CenterTitle(true);
   hh->GetYaxis()->SetLabelFont(22);
   hh->GetYaxis()->SetTitleSize(0.05);
   hh->GetYaxis()->SetTitleOffset(0.93);
   hh->GetYaxis()->SetTitleFont(22);
   hh->GetZaxis()->SetLabelFont(42);
   hh->GetZaxis()->SetLabelSize(0.035);
   hh->GetZaxis()->SetTitleSize(0.035);
   hh->GetZaxis()->SetTitleFont(42);


  gh1->SetHistogram(hh);
   


  gh1->Draw("al");

  grshade2->Draw("f");
  ghr1->Draw("l");
  ghr2->Draw("l");
  ghr3->Draw("l");


grshade->Draw("f");
  gh2->Draw("l");
  gh3->Draw("l");
  gh1->Draw("l");

  
  TLegend *lg = new TLegend(0.13,0.8,0.38,0.9);
  // TLegend *lg = new TLegend(0.186747,0.2331606,0.5502008,0.3717617,NULL,"brNDC");
   lg->SetBorderSize(0);
   lg->SetTextFont(22);
   lg->SetTextSize(0.04533679);
   lg->SetLineColor(1);
   lg->SetLineStyle(1);
   lg->SetLineWidth(1);
   lg->SetFillColor(0);
   lg->SetFillStyle(1001);
   lg->AddEntry(gh1,"Pattern 1","l");
   lg->AddEntry(ghr1,"Isotropic Emission","l");


   //   lg->Draw();



   TLine *line = new TLine(0,2.1,2825,2.1);
   line->SetLineStyle(7);
   line->SetLineWidth(2);
   line->SetLineColor(color1);
   line->Draw();
   TLatex *   tex = new TLatex(2108.537,2.311351,"\\");
   tex->SetTextFont(22);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(2330.293,2.321986,"");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(2337.685,2.39643,"");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(2337.685,2.39643,"");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(2322.901,2.4177,"");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(2352.469,2.39643,"");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(2300.726,2.343256,"");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(2315.509,2.4177,"");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(2263.766,2.332621,"");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(2241.591,2.290081,"");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(2234.199,2.353891,"");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(2337.685,2.321986,"");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(2537.265,2.332621,"");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(2973.385,2.694207,"");
   tex->SetLineWidth(2);
   tex->Draw();
   tex = new TLatex(72.555,2.17,"#LT#chi^{2}_{#nu}#GT=2.1");
   //tex = new TLatex(1820.255,2.18,"#LT#chi^{2}_{#nu}#GT=2.1");
   tex->SetTextFont(42);
   tex->SetTextColor(color1);
   tex->SetTextSize(0.03);
   //   tex->SetTextAngle(359);
   tex->SetTextAngle(359);
   tex->SetLineWidth(2);
   tex->Draw();
   //   tex = new TLatex(3098.672,2.32377,"2#sigma band");
   tex = new TLatex(2000,2.8,"Anisotropic emission 2");
   tex->SetTextColor(color2); // 38);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetTextAngle(32.7398);
   //   tex->SetTextAngle(28.7398);
   tex->SetLineColor(38);
   tex->SetLineWidth(2);
   tex->Draw();
   //tex = new TLatex(3098.672,1.2,"2#sigma band");
   tex = new TLatex(2900,1.1,"Isotropic Emission");
   tex->SetTextColor(1); // 38);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   //   tex->SetTextSize(0.03968254);
   tex->SetTextAngle(359);
   tex->SetLineColor(38);
   tex->SetLineWidth(2);
   tex->Draw();
   

       
    tex = new TLatex(3801.273,2.824231,"");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(3734.747,2.804228,"");
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(2825,2.098,2825,0.5);
   line->SetLineStyle(7);
   line->SetLineWidth(2);
   line->SetLineColor(color1);
   line->Draw();

   gPad->RedrawAxis();
}
